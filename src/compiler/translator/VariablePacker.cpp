//
// Copyright 2002 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Check whether variables fit within packing limits according to the packing rules from the GLSL ES
// 1.00.17 spec, Appendix A, section 7.

#include <algorithm>

#include "angle_gl.h"

#include "common/utilities.h"
#include "compiler/translator/VariablePacker.h"

namespace sh
{

namespace
{

// Expand the variable so that struct variables are split into their individual fields.
// Will not set the mappedName or staticUse fields on the expanded variables.
void ExpandVariable(const ShaderVariable &variable,
                    const std::string &name,
                    std::vector<ShaderVariable> *expanded);

void ExpandStructVariable(const ShaderVariable &variable,
                          const std::string &name,
                          std::vector<ShaderVariable> *expanded)
{
    ASSERT(variable.isStruct());

    const std::vector<ShaderVariable> &fields = variable.fields;

    for (size_t fieldIndex = 0; fieldIndex < fields.size(); fieldIndex++)
    {
        const ShaderVariable &field = fields[fieldIndex];
        ExpandVariable(field, name + "." + field.name, expanded);
    }
}

void ExpandStructArrayVariable(const ShaderVariable &variable,
                               unsigned int arrayNestingIndex,
                               const std::string &name,
                               std::vector<ShaderVariable> *expanded)
{
    // Nested arrays are processed starting from outermost (arrayNestingIndex 0u) and ending at the
    // innermost.
    const unsigned int currentArraySize = variable.getNestedArraySize(arrayNestingIndex);
    for (unsigned int arrayElement = 0u; arrayElement < currentArraySize; ++arrayElement)
    {
        const std::string elementName = name + ArrayString(arrayElement);
        if (arrayNestingIndex + 1u < variable.arraySizes.size())
        {
            ExpandStructArrayVariable(variable, arrayNestingIndex + 1u, elementName, expanded);
        }
        else
        {
            ExpandStructVariable(variable, elementName, expanded);
        }
    }
}

void ExpandVariable(const ShaderVariable &variable,
                    const std::string &name,
                    std::vector<ShaderVariable> *expanded)
{
    if (variable.isStruct())
    {
        if (variable.isArray())
        {
            ExpandStructArrayVariable(variable, 0u, name, expanded);
        }
        else
        {
            ExpandStructVariable(variable, name, expanded);
        }
    }
    else
    {
        ShaderVariable expandedVar = variable;
        expandedVar.name           = name;

        expanded->push_back(expandedVar);
    }
}

int GetVariablePackingRows(const ShaderVariable &variable)
{
    return GetTypePackingRows(variable.type) * variable.getArraySizeProduct();
}

class VariablePacker
{
  public:
    bool checkExpandedVariablesWithinPackingLimits(unsigned int maxVectors,
                                                   std::vector<sh::ShaderVariable> *variables);

  private:
    static const int kNumColumns      = 4;
    static const unsigned kColumnMask = (1 << kNumColumns) - 1;

    unsigned makeColumnFlags(int column, int numComponentsPerRow);
    void fillColumns(int64_t topRow, int64_t numRows, int column, int numComponentsPerRow);
    bool searchColumn(int column, int64_t numRows, int64_t *destRow, int64_t *destSize);

    int64_t topNonFullRow_;
    int64_t bottomNonFullRow_;
    int64_t maxRows_;
    std::vector<unsigned> colFlagsByRow_;
};

struct TVariableInfoComparer
{
    bool operator()(const sh::ShaderVariable &lhs, const sh::ShaderVariable &rhs) const
    {
        int lhsSortOrder = gl::VariableSortOrder(lhs.type);
        int rhsSortOrder = gl::VariableSortOrder(rhs.type);
        if (lhsSortOrder != rhsSortOrder)
        {
            return lhsSortOrder < rhsSortOrder;
        }
        // Sort by largest first.
        return lhs.getArraySizeProduct() > rhs.getArraySizeProduct();
    }
};

unsigned VariablePacker::makeColumnFlags(int column, int numComponentsPerRow)
{
    return ((kColumnMask << (kNumColumns - numComponentsPerRow)) & kColumnMask) >> column;
}

void VariablePacker::fillColumns(int64_t topRow, int64_t numRows, int column, int numComponentsPerRow)
{
    unsigned columnFlags = makeColumnFlags(column, numComponentsPerRow);
    for (int64_t r = 0; r < numRows; ++r)
    {
        const auto row = topRow + r;
        ASSERT((colFlagsByRow_[row] & columnFlags) == 0);
        colFlagsByRow_[row] |= columnFlags;
    }
}

bool VariablePacker::searchColumn(int column, int64_t numRows, int64_t *destRow, int64_t *destSize)
{
    ASSERT(destRow);

    for (; topNonFullRow_ < maxRows_ && colFlagsByRow_[topNonFullRow_] == kColumnMask; ++topNonFullRow_)
    {
    }

    for (; bottomNonFullRow_ >= 0 && colFlagsByRow_[bottomNonFullRow_] == kColumnMask; --bottomNonFullRow_)
    {
    }

    if (bottomNonFullRow_ - topNonFullRow_ + 1 < numRows)
    {
        return false;
    }

    unsigned columnFlags = makeColumnFlags(column, 1);
    int64_t topGoodRow       = 0;
    int64_t smallestGoodTop  = -1;
    auto smallestGoodSize = maxRows_ + 1;
    auto bottomRow        = bottomNonFullRow_ + 1;
    bool found           = false;
    for (auto row = topNonFullRow_; row <= bottomRow; ++row)
    {
        bool rowEmpty = row < bottomRow ? ((colFlagsByRow_[row] & columnFlags) == 0) : false;
        if (rowEmpty)
        {
            if (!found)
            {
                topGoodRow = row;
                found      = true;
            }
        }
        else
        {
            if (found)
            {
                const auto size = row - topGoodRow;
                if (size >= numRows && size < smallestGoodSize)
                {
                    smallestGoodSize = size;
                    smallestGoodTop  = topGoodRow;
                }
            }
            found = false;
        }
    }
    if (smallestGoodTop < 0)
    {
        return false;
    }

    *destRow = smallestGoodTop;
    if (destSize)
    {
        *destSize = smallestGoodSize;
    }
    return true;
}

bool VariablePacker::checkExpandedVariablesWithinPackingLimits(
    unsigned int maxVectors,
    std::vector<sh::ShaderVariable> *variables)
{
    ASSERT(maxVectors > 0);
    maxRows_          = maxVectors;
    topNonFullRow_    = 0;
    bottomNonFullRow_ = maxRows_ - 1;

    // Check whether each variable fits in the available vectors.
    for (const sh::ShaderVariable &variable : *variables)
    {
        // Structs should have been expanded before reaching here.
        ASSERT(!variable.isStruct());
        if (variable.getArraySizeProduct() > maxVectors / GetTypePackingRows(variable.type))
        {
            return false;
        }
    }

    // As per GLSL 1.017 Appendix A, Section 7 variables are packed in specific
    // order by type, then by size of array, largest first.
    std::sort(variables->begin(), variables->end(), TVariableInfoComparer());
    colFlagsByRow_.clear();
    colFlagsByRow_.resize(maxVectors, 0);

    // Packs the 4 column variables.
    size_t ii = 0;
    for (; ii < variables->size(); ++ii)
    {
        const sh::ShaderVariable &variable = (*variables)[ii];
        if (GetTypePackingComponentsPerRow(variable.type) != 4)
        {
            break;
        }
        topNonFullRow_ += GetVariablePackingRows(variable);
    }

    if (topNonFullRow_ > maxRows_)
    {
        return false;
    }

    // Packs the 3 column variables.
    int64_t num3ColumnRows = 0;
    for (; ii < variables->size(); ++ii)
    {
        const sh::ShaderVariable &variable = (*variables)[ii];
        if (GetTypePackingComponentsPerRow(variable.type) != 3)
        {
            break;
        }
        num3ColumnRows += GetVariablePackingRows(variable);
    }

    if (topNonFullRow_ + num3ColumnRows > maxRows_)
    {
        return false;
    }

    fillColumns(topNonFullRow_, num3ColumnRows, 0, 3);

    // Packs the 2 column variables.
    const auto top2ColumnRow            = topNonFullRow_ + num3ColumnRows;
    const auto twoColumnRowsAvailable   = maxRows_ - top2ColumnRow;
    auto rowsAvailableInColumns01 = twoColumnRowsAvailable;
    auto rowsAvailableInColumns23 = twoColumnRowsAvailable;
    for (; ii < variables->size(); ++ii)
    {
        const sh::ShaderVariable &variable = (*variables)[ii];
        if (GetTypePackingComponentsPerRow(variable.type) != 2)
        {
            break;
        }
        int numRows = GetVariablePackingRows(variable);
        if (numRows <= rowsAvailableInColumns01)
        {
            rowsAvailableInColumns01 -= numRows;
        }
        else if (numRows <= rowsAvailableInColumns23)
        {
            rowsAvailableInColumns23 -= numRows;
        }
        else
        {
            return false;
        }
    }

    const auto numRowsUsedInColumns01 = twoColumnRowsAvailable - rowsAvailableInColumns01;
    const auto numRowsUsedInColumns23 = twoColumnRowsAvailable - rowsAvailableInColumns23;
    fillColumns(top2ColumnRow, numRowsUsedInColumns01, 0, 2);
    fillColumns(maxRows_ - numRowsUsedInColumns23, numRowsUsedInColumns23, 2, 2);

    // Packs the 1 column variables.
    for (; ii < variables->size(); ++ii)
    {
        const sh::ShaderVariable &variable = (*variables)[ii];
        ASSERT(1 == GetTypePackingComponentsPerRow(variable.type));
        const int64_t numRows        = GetVariablePackingRows(variable);
        int smallestColumn = -1;
        auto smallestSize   = maxRows_ + 1;
        int64_t topRow         = -1;
        for (int column = 0; column < kNumColumns; ++column)
        {
            int64_t row  = 0;
            int64_t size = 0;
            if (searchColumn(column, numRows, &row, &size))
            {
                if (size < smallestSize)
                {
                    smallestSize   = size;
                    smallestColumn = column;
                    topRow         = row;
                }
            }
        }

        if (smallestColumn < 0)
        {
            return false;
        }

        fillColumns(topRow, numRows, smallestColumn, 1);
    }

    ASSERT(variables->size() == ii);

    return true;
}

}  // anonymous namespace

int GetTypePackingComponentsPerRow(sh::GLenum type)
{
    switch (type)
    {
        case GL_FLOAT_MAT4:
        case GL_FLOAT_MAT2:
        case GL_FLOAT_MAT2x4:
        case GL_FLOAT_MAT3x4:
        case GL_FLOAT_MAT4x2:
        case GL_FLOAT_MAT4x3:
        case GL_FLOAT_VEC4:
        case GL_INT_VEC4:
        case GL_BOOL_VEC4:
        case GL_UNSIGNED_INT_VEC4:
            return 4;
        case GL_FLOAT_MAT3:
        case GL_FLOAT_MAT2x3:
        case GL_FLOAT_MAT3x2:
        case GL_FLOAT_VEC3:
        case GL_INT_VEC3:
        case GL_BOOL_VEC3:
        case GL_UNSIGNED_INT_VEC3:
            return 3;
        case GL_FLOAT_VEC2:
        case GL_INT_VEC2:
        case GL_BOOL_VEC2:
        case GL_UNSIGNED_INT_VEC2:
            return 2;
        default:
            ASSERT(gl::VariableComponentCount(type) == 1);
            return 1;
    }
}

int GetTypePackingRows(sh::GLenum type)
{
    switch (type)
    {
        case GL_FLOAT_MAT4:
        case GL_FLOAT_MAT2x4:
        case GL_FLOAT_MAT3x4:
        case GL_FLOAT_MAT4x3:
        case GL_FLOAT_MAT4x2:
            return 4;
        case GL_FLOAT_MAT3:
        case GL_FLOAT_MAT2x3:
        case GL_FLOAT_MAT3x2:
            return 3;
        case GL_FLOAT_MAT2:
            return 2;
        default:
            ASSERT(gl::VariableRowCount(type) == 1);
            return 1;
    }
}

bool CheckVariablesInPackingLimits(unsigned int maxVectors,
                                   const std::vector<ShaderVariable> &variables)
{
    VariablePacker packer;
    std::vector<sh::ShaderVariable> expandedVariables;
    for (const ShaderVariable &variable : variables)
    {
        ExpandVariable(variable, variable.name, &expandedVariables);
    }
    return packer.checkExpandedVariablesWithinPackingLimits(maxVectors, &expandedVariables);
}

bool CheckVariablesInPackingLimits(unsigned int maxVectors,
                                   const std::vector<ShaderVariable> &variables);

}  // namespace sh
