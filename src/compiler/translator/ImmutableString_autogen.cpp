// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#ifndef ANGLE_TRANSLATOR_ESSL_ONLY

#    include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#    if defined(_MSC_VER)
#        pragma warning(disable : 4309)  // truncation of constant value
#    endif

namespace
{

constexpr int mangledkT1[] = {3102, 1325, 1351, 3001, 1248, 3253, 589,  739, 2360, 2951,
                              1700, 3759, 2038, 664,  3245, 3120, 1585, 527, 2294, 2587,
                              1485, 188,  2635, 932,  884,  1991, 918,  320, 2213, 3603,
                              676,  1242, 115,  2611, 2163, 2535, 3233, 54,  3230, 1500};
constexpr int mangledkT2[] = {1129, 226,  3871, 1567, 3267, 3307, 452,  3099, 2330, 3246,
                              3512, 1556, 3216, 909,  1679, 1812, 3619, 2551, 2821, 3333,
                              3764, 2526, 2149, 2101, 1636, 2341, 2985, 454,  627,  1307,
                              466,  537,  2536, 736,  2238, 1704, 1050, 3135, 564,  182};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    973,  0,    0,    2762, 0,    0,    3695,
    2780, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2474,
    0,    616,  0,    0,    0,    0,    0,    626,  0,    0,    0,    0,    0,    242,  0,    0,
    0,    2505, 1729, 3344, 0,    0,    362,  0,    139,  0,    0,    0,    0,    3022, 2925, 0,
    0,    0,    0,    0,    0,    961,  0,    2450, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    1206, 0,    0,    0,    0,    0,    2292, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    2294, 0,    0,    0,    0,    0,    0,    3243, 0,    0,    1832, 1889,
    3015, 2347, 397,  0,    0,    0,    0,    0,    2268, 487,  1220, 0,    0,    2970, 0,    0,
    0,    0,    0,    0,    0,    192,  1062, 0,    0,    0,    0,    0,    0,    0,    0,    1118,
    0,    0,    1389, 0,    0,    0,    0,    3334, 0,    0,    1866, 0,    0,    0,    3268, 0,
    0,    1397, 0,    0,    0,    0,    0,    735,  0,    0,    0,    193,  15,   0,    3158, 0,
    0,    0,    3298, 2376, 0,    1462, 2924, 183,  0,    2649, 0,    0,    3226, 3552, 3343, 0,
    2502, 3258, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1942, 0,    0,    397,
    1413, 2818, 0,    0,    0,    0,    2738, 2414, 3786, 0,    0,    0,    67,   0,    0,    236,
    0,    0,    0,    0,    2668, 0,    0,    0,    0,    0,    0,    0,    0,    0,    1223, 0,
    0,    0,    0,    0,    264,  1411, 0,    0,    820,  0,    1770, 0,    806,  833,  0,    0,
    1814, 3051, 0,    3651, 2100, 0,    66,   0,    878,  0,    0,    0,    1974, 854,  0,    2011,
    0,    0,    0,    0,    3393, 1300, 0,    0,    0,    109,  0,    0,    0,    0,    3313, 0,
    3075, 0,    0,    0,    617,  0,    0,    2650, 0,    0,    465,  3456, 152,  84,   3232, 752,
    1075, 0,    0,    1699, 0,    224,  863,  0,    0,    0,    0,    0,    0,    2953, 0,    0,
    0,    3203, 0,    121,  0,    2641, 0,    0,    0,    204,  0,    0,    1953, 0,    0,    0,
    0,    3898, 3511, 0,    1586, 696,  0,    0,    2698, 0,    2432, 3277, 0,    0,    1511, 663,
    0,    0,    1570, 0,    604,  3199, 0,    0,    1463, 393,  0,    0,    0,    0,    2089, 1937,
    752,  0,    532,  0,    1645, 0,    939,  3461, 2351, 1982, 0,    3505, 0,    661,  0,    0,
    0,    0,    0,    1720, 753,  3334, 0,    2086, 164,  0,    2217, 1863, 0,    0,    0,    0,
    0,    3788, 1074, 0,    1229, 0,    403,  0,    910,  345,  0,    1835, 129,  2886, 0,    0,
    0,    0,    2440, 2572, 0,    0,    0,    0,    0,    3718, 0,    3856, 13,   0,    2909, 449,
    0,    0,    0,    0,    0,    3898, 0,    0,    0,    0,    0,    0,    0,    1796, 0,    3301,
    0,    3374, 0,    0,    0,    2637, 0,    0,    0,    0,    0,    2487, 24,   1432, 0,    1127,
    99,   0,    0,    0,    0,    3601, 3638, 2083, 0,    3667, 676,  1955, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2263, 2650, 0,    0,    813,  2872, 0,    0,    1530, 1263,
    0,    0,    0,    0,    27,   0,    0,    0,    0,    0,    0,    0,    0,    0,    509,  2814,
    1472, 1384, 0,    0,    0,    0,    0,    3528, 0,    0,    0,    0,    923,  649,  0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    34,   0,    0,    0,    0,    183,  0,    439,
    1359, 0,    0,    0,    0,    1291, 167,  0,    0,    591,  0,    1224, 0,    1753, 0,    0,
    0,    0,    418,  3560, 0,    1326, 2703, 0,    0,    2694, 0,    104,  440,  0,    0,    0,
    0,    0,    0,    0,    0,    2005, 0,    2661, 0,    0,    2969, 1668, 3653, 0,    0,    0,
    0,    0,    0,    3832, 0,    2835, 380,  0,    3081, 0,    0,    0,    199,  0,    653,  3303,
    0,    3432, 0,    1524, 1795, 2718, 0,    2461, 0,    0,    1838, 0,    0,    724,  1453, 0,
    0,    578,  2660, 2676, 1297, 0,    0,    0,    0,    3364, 0,    0,    0,    0,    0,    1997,
    0,    0,    0,    79,   0,    319,  1270, 1804, 515,  254,  0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1728, 0,    938,  2011, 1135, 419,  3847, 0,    0,
    992,  0,    1601, 0,    0,    0,    0,    0,    3562, 867,  0,    0,    0,    27,   0,    0,
    1426, 0,    0,    2559, 686,  0,    0,    0,    0,    608,  1880, 3358, 0,    0,    76,   0,
    0,    0,    0,    1686, 1122, 780,  0,    0,    2811, 0,    805,  0,    3568, 3098, 0,    0,
    0,    0,    0,    0,    0,    0,    2172, 429,  3755, 0,    819,  0,    0,    0,    538,  3871,
    3617, 2269, 0,    147,  0,    3475, 2291, 0,    0,    868,  2865, 2720, 738,  0,    9,    766,
    353,  2940, 521,  0,    0,    0,    0,    0,    3649, 1789, 121,  0,    0,    438,  2023, 0,
    0,    1124, 0,    0,    0,    0,    0,    469,  3089, 0,    3837, 2214, 273,  1776, 722,  0,
    0,    0,    0,    0,    0,    3583, 3394, 0,    0,    1302, 3405, 0,    1191, 1277, 0,    3244,
    0,    1010, 0,    771,  775,  0,    1234, 340,  0,    0,    0,    1029, 0,    0,    1037, 306,
    2918, 0,    0,    1276, 2437, 948,  3700, 2008, 0,    0,    0,    486,  0,    3645, 510,  287,
    1555, 1946, 483,  0,    3344, 0,    3126, 0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    3249, 0,    0,    0,    2124, 1044, 0,    2645, 0,    0,    0,    0,    3079, 0,    0,
    0,    0,    0,    0,    0,    581,  3109, 0,    934,  0,    0,    0,    0,    0,    3881, 1317,
    0,    1109, 781,  1122, 0,    1191, 1355, 3154, 0,    817,  3560, 765,  2974, 0,    0,    461,
    2776, 1285, 154,  0,    0,    1414, 0,    0,    0,    0,    525,  0,    0,    0,    0,    0,
    2040, 0,    1688, 1493, 342,  0,    1988, 2055, 3664, 0,    0,    0,    0,    3009, 1412, 1879,
    0,    3385, 0,    0,    0,    2079, 0,    0,    1781, 1010, 108,  723,  0,    1690, 2810, 3783,
    0,    3575, 0,    3907, 0,    0,    0,    0,    0,    270,  0,    0,    0,    2331, 0,    2006,
    3770, 0,    0,    1036, 632,  0,    0,    0,    0,    2318, 0,    0,    0,    0,    3878, 1634,
    0,    0,    1529, 0,    0,    2716, 0,    0,    0,    0,    1054, 0,    896,  0,    0,    0,
    0,    2124, 481,  0,    2613, 0,    912,  0,    0,    3746, 305,  2703, 0,    0,    1175, 1283,
    3886, 2628, 0,    92,   0,    0,    0,    0,    1490, 178,  0,    503,  702,  158,  0,    2096,
    0,    0,    0,    0,    1670, 1409, 0,    0,    0,    0,    2260, 0,    0,    1825, 0,    1631,
    635,  330,  0,    0,    1900, 2157, 3669, 3727, 1122, 2498, 0,    0,    1377, 2971, 321,  1839,
    0,    0,    3277, 141,  2528, 0,    0,    227,  1866, 0,    0,    339,  0,    0,    404,  0,
    2374, 1075, 2268, 1018, 2103, 0,    0,    0,    0,    0,    922,  0,    0,    2266, 0,    2027,
    0,    3904, 0,    654,  0,    484,  2286, 0,    0,    1868, 161,  0,    3515, 255,  1416, 3170,
    0,    0,    0,    528,  711,  1932, 0,    0,    0,    0,    288,  0,    3459, 0,    0,    0,
    655,  0,    2951, 571,  2357, 0,    0,    0,    0,    0,    0,    0,    2590, 1535, 0,    0,
    912,  0,    0,    0,    1011, 821,  0,    0,    1799, 0,    0,    0,    0,    0,    0,    0,
    0,    2238, 0,    1591, 0,    3622, 2020, 2798, 0,    0,    0,    3522, 0,    87,   2687, 3437,
    0,    0,    0,    0,    3307, 386,  2148, 0,    1410, 0,    0,    3563, 3214, 0,    0,    2854,
    3813, 0,    480,  1560, 1760, 0,    0,    871,  0,    0,    0,    2318, 1249, 1689, 1358, 2132,
    2163, 2945, 0,    991,  332,  2860, 139,  63,   0,    2621, 2871, 1084, 0,    0,    470,  729,
    0,    0,    0,    0,    1442, 485,  3878, 740,  267,  0,    3366, 1,    2026, 0,    0,    214,
    914,  2285, 0,    0,    1395, 0,    0,    0,    848,  1362, 0,    1670, 0,    0,    0,    1754,
    0,    240,  0,    2923, 803,  0,    3737, 0,    932,  0,    2561, 0,    0,    2481, 0,    1902,
    2426, 1238, 2118, 1248, 0,    3123, 0,    3614, 0,    0,    1562, 0,    0,    1264, 0,    0,
    2517, 1042, 0,    1322, 1074, 397,  0,    0,    3245, 0,    307,  0,    0,    2735, 0,    0,
    0,    2187, 3421, 0,    78,   1464, 0,    2229, 1124, 1620, 0,    1851, 1266, 3861, 3570, 2512,
    3721, 0,    2434, 0,    898,  595,  1028, 0,    0,    674,  552,  1303, 107,  0,    2828, 1223,
    2115, 488,  1162, 1495, 297,  1451, 0,    1263, 2406, 2547, 3691, 58,   0,    0,    901,  0,
    188,  3764, 552,  1100, 2652, 1908, 0,    0,    3509, 2174, 0,    2721, 1608, 3120, 0,    0,
    2208, 2502, 0,    0,    0,    141,  0,    0,    3513, 1495, 1346, 0,    0,    0,    3470, 212,
    1489, 558,  414,  0,    286,  1218, 0,    0,    1959, 397,  0,    687,  0,    3477, 0,    1961,
    0,    1080, 0,    3273, 3838, 2167, 0,    539,  259,  2751, 2004, 591,  1961, 0,    0,    3217,
    2929, 0,    55,   1744, 0,    1974, 1200, 3712, 0,    1782, 437,  0,    0,    0,    0,    0,
    2641, 1928, 0,    3837, 0,    0,    3330, 2153, 1863, 170,  55,   0,    607,  0,    157,  0,
    1080, 622,  0,    0,    2132, 3659, 0,    0,    1926, 327,  1581, 580,  0,    1385, 0,    279,
    0,    590,  2185, 0,    0,    3600, 655,  1765, 0,    0,    0,    2349, 0,    1604, 0,    0,
    0,    378,  821,  0,    9,    1375, 1667, 787,  0,    0,    1331, 0,    0,    30,   1701, 3175,
    0,    0,    520,  3496, 1961, 0,    0,    0,    2421, 328,  0,    0,    0,    705,  0,    196,
    649,  0,    2141, 0,    0,    0,    3375, 142,  0,    1235, 467,  1317, 0,    0,    0,    2020,
    1310, 1774, 0,    1984, 1970, 1576, 1253, 1666, 5,    0,    0,    0,    0,    3866, 1608, 1022,
    2036, 1541, 0,    0,    3463, 2681, 0,    151,  0,    1514, 1431, 0,    0,    657,  2420, 1138,
    0,    511,  0,    2862, 0,    0,    2112, 335,  374,  0,    1633, 3431, 2234, 0,    1917, 0,
    0,    0,    1463, 0,    1479, 2534, 0,    0,    3101, 3053, 2960, 426,  3640, 2198, 2870, 1132,
    3408, 0,    2876, 1012, 0,    0,    0,    0,    3071, 0,    0,    1005, 315,  44,   0,    0,
    1002, 1920, 1183, 0,    0,    2613, 2154, 1517, 0,    3444, 0,    3593, 0,    2733, 1891, 3882,
    40,   918,  242,  0,    3341, 1565, 2210, 1290, 1846, 3872, 2684, 1526, 58,   815,  1012, 2657,
    1402, 0,    0,    0,    84,   2751, 0,    0,    0,    3074, 0,    3785, 1199, 0,    924,  3605,
    0,    0,    1074, 0,    3857, 167,  2251, 0,    0,    0,    0,    0,    1650, 1696, 0,    0,
    0,    0,    910,  2774, 1579, 643,  0,    1834, 0,    3599, 0,    0,    0,    116,  2817, 754,
    0,    0,    0,    3835, 662,  826,  638,  0,    818,  0,    2527, 0,    0,    0,    376,  0,
    2114, 0,    523,  2881, 1323, 3508, 293,  830,  2124, 490,  1006, 3688, 0,    3863, 2800, 0,
    0,    878,  0,    2214, 0,    0,    210,  1404, 0,    0,    0,    0,    3177, 255,  0,    0,
    3673, 540,  1528, 2066, 452,  1568, 1052, 2062, 0,    2630, 2504, 0,    448,  408,  0,    672,
    1255, 720,  0,    1607, 1228, 0,    1921, 0,    0,    2585, 0,    34,   0,    0,    1571, 3473,
    0,    315,  409,  628,  0,    0,    0,    3006, 1559, 2084, 1538, 1570, 2157, 0,    582,  0,
    0,    1519, 0,    1262, 0,    3257, 2850, 0,    0,    1074, 0,    0,    0,    748,  1477, 1600,
    0,    0,    0,    2851, 3302, 0,    0,    0,    0,    219,  1185, 2753, 1834, 0,    3303, 0,
    2714, 0,    908,  0,    3167, 1033, 1614, 0,    2484, 0,    0,    138,  285,  0,    0,    83,
    0,    1725, 1523, 0,    782,  0,    1889, 1651, 2226, 0,    2741, 1363, 1560, 0,    0,    2891,
    0,    1451, 0,    493,  0,    2128, 403,  1797, 3240, 1981, 1644, 3337, 260,  39,   614,  1547,
    1877, 1072, 1355, 0,    0,    0,    2458, 645,  2145, 181,  1081, 0,    0,    0,    0,    0,
    0,    1268, 0,    0,    0,    0,    0,    693,  2656, 326,  0,    689,  582,  2199, 3405, 1820,
    1081, 1843, 634,  0,    0,    0,    0,    3336, 0,    3418, 0,    1685, 0,    0,    0,    0,
    1697, 2997, 2608, 409,  921,  0,    0,    624,  3482, 0,    0,    1992, 1272, 2445, 0,    0,
    1328, 0,    989,  3597, 0,    3585, 3883, 3195, 1598, 0,    0,    1417, 0,    2660, 2003, 0,
    0,    0,    0,    1971, 0,    431,  160,  512,  1344, 863,  0,    1273, 1499, 3397, 1480, 0,
    0,    0,    3238, 0,    0,    1553, 0,    0,    0,    2065, 0,    143,  733,  910,  1186, 1340,
    0,    0,    0,    1678, 0,    0,    736,  0,    2918, 699,  0,    0,    33,   478,  3397, 0,
    2897, 2569, 2150, 701,  2982, 3486, 0,    2549, 998,  0,    2305, 412,  149,  1843, 498,  3831,
    245,  0,    2317, 1282, 0,    0,    3008, 0,    0,    0,    771,  5,    0,    2406, 481,  333,
    0,    3753, 0,    0,    0,    1925, 0,    1245, 2106, 133,  0,    942,  563,  1043, 0,    54,
    0,    0,    2897, 3358, 0,    213,  1382, 0,    0,    1246, 0,    0,    3242, 0,    2560, 1193,
    1880, 3657, 0,    0,    0,    0,    3103, 1572, 3218, 976,  1336, 1869, 0,    3441, 0,    0,
    0,    1761, 0,    475,  3499, 2223, 1580, 3241, 1448, 1505, 340,  2161, 971,  2778, 0,    0,
    0,    0,    2277, 1238, 0,    0,    0,    0,    1550, 2419, 3198, 269,  0,    215,  1443, 1331,
    0,    0,    0,    0,    312,  1759, 644,  0,    2454, 2484, 0,    1085, 2497, 1881, 0,    733,
    2926, 2823, 2087, 0,    3876, 2674, 1042, 1476, 0,    825,  0,    0,    2309, 0,    3179, 1074,
    0,    2737, 0,    2037, 164,  1974, 0,    0,    3615, 0,    557,  2285, 543,  0,    3274, 0,
    0,    0,    1549, 3418, 3545, 1415, 0,    3788, 927,  3182, 0,    0,    0,    147,  0,    2151,
    929,  0,    575,  0,    2082, 0,    0,    0,    2292, 2688, 0,    1215, 2858, 3040, 0,    0,
    0,    727,  0,    486,  0,    0,    0,    2010, 0,    3631, 791,  3414, 2056, 0,    0,    0,
    0,    0,    320,  0,    1929, 1448, 2701, 867,  44,   0,    827,  8,    0,    2172, 0,    3685,
    1006, 1809, 421,  1808, 1618, 2961, 1651, 0,    2796, 0,    0,    276,  0,    141,  0,    0,
    0,    1427, 0,    0,    3638, 0,    0,    0,    2652, 1428, 2064, 558,  3346, 0,    0,    0,
    1444, 2779, 0,    1502, 0,    0,    7,    523,  3403, 3075, 454,  0,    0,    0,    963,  1610,
    1687, 753,  0,    0,    0,    2369, 348,  0,    0,    0,    1220, 3088, 1970, 1862, 0,    2015,
    0,    0,    861,  69,   947,  1072, 0,    0,    0,    2095, 1403, 0,    0,    0,    668,  3574,
    0,    0,    1587, 0,    2643, 766,  3064, 839,  1646, 1932, 967,  0,    1379, 159,  747,  0,
    2986, 0,    1369, 0,    0,    2173, 0,    0,    0,    2164, 2861, 0,    1971, 0,    924,  2951,
    1118, 0,    3774, 54,   1008, 0,    3208, 0,    1540, 1133, 0,    1514, 0,    3621, 737,  3311,
    0,    0,    0,    0,    0,    235,  1998, 776,  0,    1671, 214,  2035, 0,    0,    0,    0,
    500,  0,    191,  0,    0,    3520, 0,    2050, 1952, 3160, 0,    2269, 222,  1112, 229,  716,
    140,  0,    1725, 2620, 1604, 3612, 2868, 670,  1860, 1275, 1799, 123,  0,    1244, 2992, 0,
    0,    3772, 0,    1911, 0,    2896, 1208, 52,   594,  20,   0,    0,    0,    0,    3813, 673,
    543,  521,  2132, 0,    2137, 2681, 0,    496,  2754, 369,  0,    3887, 0,    1005, 1821, 0,
    3674, 996,  0,    1672, 1164, 0,    1661, 3564, 564,  0,    151,  2700, 0,    0,    0,    1941,
    683,  0,    0,    0,    2105, 0,    1640, 1792, 1356, 2551, 1462, 2050, 0,    823,  646,  0,
    91,   0,    0,    2709, 798,  0,    1885, 3777, 0,    1968, 2045, 3416, 3606, 1968, 3614, 2815,
    54,   2233, 0,    0,    0,    2119, 1871, 0,    1299, 217,  0,    0,    0,    753,  0,    0,
    1621, 2166, 2026, 778,  1997, 732,  2396, 0,    0,    310,  882,  1292, 0,    886,  3716, 3263,
    338,  0,    0,    0,    0,    3015, 3108, 2660, 1977, 0,    776,  1231, 0,    550,  432,  1992,
    276,  0,    0,    0,    0,    0,    2115, 2554, 2917, 915,  1098, 0,    439,  0,    630,  2970,
    0,    626,  2180, 1762, 0,    966,  66,   760,  1864, 1993, 951,  357,  0,    0,    1268, 0,
    0,    259,  0,    0,    3066, 2879, 0,    0,    1747, 3380, 0,    1650, 352,  2055, 626,  1650,
    0,    2663, 0,    0,    102,  0,    2088, 0,    1340, 3313, 1109, 650,  0,    0,    0,    2916,
    3143, 972,  1052, 2786, 0,    0,    1334, 1546, 672,  381,  3707, 2004, 0,    3114, 1348, 0,
    55,   0,    2183, 0,    2973, 1513, 1206, 0,    742,  2276, 0,    2719, 0,    0,    315,  0,
    0,    1075, 684,  3143, 3873, 3825, 1541, 1932, 0,    1638, 0,    0,    0,    3215, 3824, 2212,
    2929, 560,  748,  0,    1287, 3340, 410,  2005, 1419, 3408, 2366, 0,    0,    0,    2126, 3536,
    1576, 1016, 0,    3899, 0,    593,  2370, 0,    0,    2878, 0,    40,   1304, 1411, 0,    816,
    3294, 0,    2800, 0,    3428, 578,  3641, 3056, 129,  3496, 709,  2110, 0,    0,    1387, 69,
    873,  3302, 3226, 0,    1736, 3183, 566,  531,  0,    3203, 687,  3338, 0,    202,  2062, 0,
    0,    895,  0,    0,    1546, 0,    1288, 2919, 1815, 0,    0,    1287, 0,    3736, 1315, 266,
    821,  2741, 33,   0,    3497, 0,    1059, 3896, 0,    0,    0,    1379, 1597, 118,  1255, 3567,
    3067, 0,    3673, 1079, 0,    275,  1694, 51,   3858, 0,    353,  2263, 0,    3597, 1664, 381,
    1902, 0,    2133, 1741, 898,  0,    1995, 0,    0,    0,    0,    843,  1864, 3428, 2262, 3349,
    0,    2645, 1507, 725,  210,  258,  2887, 0,    681,  2731, 17,   948,  0,    2977, 0,    2370,
    3597, 349,  2424, 2150, 3421, 2596, 1164, 210,  2153, 53,   1962, 471,  99,   2018, 1728, 0,
    0,    2155, 2013, 595,  3828, 2895, 2329, 984,  0,    204,  453,  1341, 1667, 3773, 0,    1817,
    0,    3108, 3707, 1093, 508,  349,  578,  0,    2159, 0,    0,    974,  2466, 3540, 0,    856,
    3793, 1704, 1090, 0,    1657, 470,  0,    0,    1637, 2749, 0,    2442, 3890, 1344, 356,  0,
    63,   2310, 1212, 0,    0,    1520, 2167, 1233, 0,    0,    2035, 2484, 3569, 2255, 0,    0,
    2198, 3562, 0,    927,  1927, 1159, 0,    3827, 1770, 973,  2030, 0,    3891, 0,    0,    2649,
    354,  0,    0,    2788, 0,    2069, 0,    52,   0,    508,  0,    418,  1919, 2246, 884,  1128,
    571,  1174, 1465, 1946, 1264, 3418, 527,  0,    0,    0,    1243, 481,  0,    836,  2770, 1577,
    2660, 3473, 0,    0,    71,   3828, 1713, 0,    1228, 2355, 1192, 0,    1790, 738,  0,    3738,
    3650, 0,    73,   0,    1702, 1863, 0,    617,  0,    0,    1530, 0,    2405, 1775, 929,  0,
    0,    0,    2080, 2768, 0,    3012, 0,    935,  0,    0,    0,    1003, 0,    3536, 0,    1845,
    3873, 3629, 967,  0,    1653, 1452, 2371, 0,    0,    116,  1012, 2871, 0,    0,    855,  3097,
    0,    208,  2550, 0,    2060, 0,    0,    861,  3686, 1367, 3365, 0,    0,    0,    84,   0,
    1296, 1430, 1322, 0,    0,    0,    1698, 2567, 1659, 533,  3172, 3401, 23,   3182, 0,    1090,
    1740, 1020, 0,    0,    0,    0,    0,    1681, 427,  2766, 2834, 2909, 1449, 197,  0,    877,
    285,  3718, 162,  567,  1071, 75,   3783, 0,    635,  0,    2080, 1818, 0,    0,    2750, 0,
    255,  351,  0,    0,    1196, 0,    1084, 0,    810,  2790, 0,    2276, 0,    3083, 2887, 0,
    1301, 617,  3341, 1907, 2568, 2996, 946,  3338, 0,    1090, 898,  521,  0,    1203, 1921, 0,
    2995, 0,    2073, 0,    3755, 0,    2973, 0,    742,  3720, 1032, 493,  42,   2256, 0,    0,
    1189, 2243, 904,  0,    0,    0,    0,    532,  310,  2242, 0,    2165, 0,    3791, 0,    2406,
    0,    0,    1277, 774,  1326, 662,  0,    505,  1959, 3652, 594,  999,  1303, 0,    1756, 0,
    1077, 1337, 2229, 2158, 0,    0,    1816, 0,    348,  1764, 1873, 3387, 3181, 49,   1999, 0,
    929,  82,   0,    0,    0,    1000, 1311, 3475, 507,  1749, 798,  1128, 0,    2962, 1515, 422,
    1931, 256,  0,    0,    1089, 0,    392,  0,    190,  0,    0,    2007, 0,    2846, 2930, 1950,
    0,    940,  0,    3178, 3521, 1228, 1240, 0,    515,  746,  0,    1097, 404,  1554, 3192, 388,
    3497, 715,  1118, 3907, 2484, 1613, 786,  852,  24,   0,    1019, 0,    3664, 0,    81,   0,
    1065, 1587, 1434, 0,    1032, 3497, 1920, 2071, 251,  1394, 0,    3717, 235,  0,    0,    3880,
    323,  0,    0,    182,  0,    2350, 210,  56,   1538, 1135, 819,  2434, 423,  2662, 1661, 0,
    0,    190,  0,    2191, 0,    1829, 3781, 703,  14,   0,    0,    3759, 2941, 0,    968,  0,
    1718, 0,    2519, 3033, 1851, 797,  2103, 2602, 2372, 0,    0,    0,    0,    3672, 0,    3417,
    0,    1068, 758,  3885, 0,    3359, 157,  0,    1456, 1946, 2636, 0,    984,  3785, 3502, 2470,
    2911, 273,  361,  187,  559,  1561, 754,  1164, 0,    1829, 131,  0,    2173, 0,    0,    429,
    1648, 3554, 0,    0,    0,    0,    0,    2723, 1456, 2893, 0,    3325, 920,  0,    1278, 1415,
    870,  0,    1202, 301,  0,    0,    2119, 0,    2843, 0,    865,  1455, 3408, 1013, 0,    3761,
    2880, 1846, 0,    1986, 1336, 0,    0,    0,    3325, 679,  2137, 0,    747,  61,   0,    3632,
    724,  1253, 1210, 0,    1026, 543,  1075, 2140, 1769, 1444, 898,  728,  3618, 3121, 1167, 0,
    0,    1207, 0,    832,  3100, 2689, 0,    0,    0,    0,    0,    1148, 1496, 0,    1068, 379,
    2170, 1804, 3492, 462,  3818, 0,    1488, 1143, 1894, 1053, 0,    2106, 2699, 986,  0,    1591,
    3767, 1635, 420,  2928, 0,    0,    0,    0,    0,    194,  0,    553,  0,    1270, 0,    1388,
    1274, 2357, 159,  1175, 0,    2959, 2994, 0,    1557, 0,    398,  3809, 946,  1030, 0,    1274,
    0,    870,  0,    2234, 3167, 0,    2329, 0,    1596, 0,    0,    57,   1748, 1362, 3827, 1303,
    0,    0,    0,    3452, 0,    1579, 2160, 1638, 3335, 451,  1783, 1139, 2761, 463,  602,  0,
    1461, 0,    1261, 146,  0,    612,  0,    0,    1987, 846,  3795, 211,  598,  0,    0,    979,
    0,    0,    2009, 2219, 53,   2346, 3000, 658,  624,  698,  0,    3845, 2293, 0,    0,    0,
    1642, 0,    0,    711,  2977, 2381, 470,  2439, 14,   1300, 0,    3020, 654,  0,    1307, 541,
    467,  322,  966,  0,    3758, 3079, 0,    0,    646,  594,  2445, 0,    0,    282,  0,    1600,
    0,    660,  430,  1050, 2570, 2336, 1306, 0,    0,    2560, 227,  0,    3467, 1714, 1026, 3810,
    0,    2372, 0,    0,    1855, 0,    0,    1725, 3572, 3321, 0,    0,    0,    72,   448,  0,
    1816, 0,    1048, 3814, 2844, 0,    0,    1786, 2735, 1808, 2014, 703,  0,    0,    0,    0,
    499,  687,  3740, 0,    803,  3524, 447,  747,  456,  3216, 1880, 2958, 0,    103,  341,  812,
    3732, 0,    216,  441,  1629, 1804, 1117, 0,    2048, 0,    0,    253,  1574, 177,  1932, 648,
    1705, 0,    0,    1780, 3640, 236,  0,    3881, 2044, 1761, 552,  983,  465,  3346, 1482, 1918,
    633,  1984, 2185, 2179, 996,  580,  1853, 387,  2568, 0,    1221, 0,    1881, 3433, 962,  3650,
    1942, 0,    351,  0,    0,    0,    0,    2090, 0,    1138, 0,    1539, 1706, 127,  0,    958,
    1263, 3282, 1796, 280,  0,    692,  0,    1164, 463,  2582, 0,    722,  0,    0,    0,    3517,
    0,    0,    311,  1146, 2765, 0,    353,  252,  0,    0,    0,    0,    580,  0,    0,    3907,
    420,  2946, 0,    2534, 1985, 596,  74,   10,   0,    0,    0,    0,    0,    1914, 0,    3602,
    2121, 0,    0,    3874, 0,    1719, 507,  1037, 0,    0,    532,  0,    1720, 958,  700,  2964,
    405,  0,    0,    0,    1373, 576,  204,  1618, 0,    0,    0,    0,    478,  2877, 104,  966,
    0,    3745, 839,  526,  0,    66,   1675, 0,    1136, 3165, 1399, 2593, 0,    41,   783,  0,
    0,    1271, 636,  0,    1738, 1800, 0,    2813, 530,  1144, 692,  1594, 797,  1260, 2077, 0,
    0,    0,    0,    0,    2201, 2617, 1101, 29,   0,    3363, 474,  0,    0,    833,  980,  0,
    623,  1926, 2010, 602,  0,    373,  1501, 784,  1252, 601,  1760, 0,    1921, 0,    0,    1690,
    0,    549,  321,  0,    0,    1382, 1924, 869,  1,    717,  1573, 1272, 840,  67,   1776, 827,
    246,  397,  1012, 206,  3230, 0,    557,  0,    1454, 0,    2327, 3180, 3134, 2236, 3342, 1649,
    1942, 3752, 0,    0,    238,  510,  1887, 2231, 3144, 309,  1591, 0,    3625, 0,    1143, 0,
    794,  0,    0,    0,    0,    0,    514,  0,    0,    0,    1699, 1158, 1604, 226,  0,    3901,
    0,    1753, 3618, 1600, 2160, 719,  658,  0,    0,    2870, 1425, 555,  0,    321,  0,    0,
    1282, 1168, 0,    0,    0,    0,    3295, 1959, 0,    3542, 825,  3888, 0,    2118, 0,    0,
    513,  3796, 944,  1189, 2590, 0,    0,    3440, 0,    99,   0,    1078, 2205, 0,    0,    560,
    3491, 562,  864,  0,    851,  3573, 1087, 0,    1405, 0,    1024, 1590, 0,    75,   3130, 0,
    1195, 0,    784,  0,    0,    0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 3910;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 3910;
}

constexpr int unmangledkT1[] = {361, 84,  287, 107, 189, 235, 216, 268, 315, 73, 365, 67, 31,
                                103, 108, 1,   206, 276, 63,  133, 161, 27,  70, 359, 69, 354};
constexpr int unmangledkT2[] = {116, 270, 65,  391, 92,  345, 246, 10,  306, 20,  206, 346, 291,
                                195, 244, 398, 269, 237, 25,  394, 247, 248, 315, 180, 233, 167};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   82,  0,   0,   34,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   42,  391, 0,   0,   0,   0,   7,   0,   187, 0,   64,  237,
    350, 377, 112, 192, 0,   217, 0,   133, 0,   0,   0,   0,   0,   384, 0,   0,   0,   0,   0,
    122, 0,   107, 0,   283, 276, 9,   317, 215, 0,   147, 167, 232, 169, 15,  0,   0,   247, 25,
    348, 0,   364, 68,  195, 0,   345, 0,   0,   154, 31,  0,   0,   180, 0,   0,   342, 321, 0,
    0,   0,   0,   2,   244, 73,  61,  0,   0,   259, 0,   51,  178, 0,   0,   12,  28,  202, 0,
    113, 144, 0,   0,   0,   196, 12,  0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
    0,   309, 0,   232, 56,  0,   315, 358, 0,   0,   0,   341, 21,  360, 0,   0,   0,   0,   0,
    46,  0,   325, 17,  11,  272, 0,   0,   126, 401, 0,   85,  40,  305, 0,   0,   0,   0,   0,
    0,   0,   7,   201, 56,  142, 405, 0,   0,   0,   339, 164, 0,   192, 0,   109, 206, 60,  40,
    0,   0,   243, 17,  0,   145, 0,   163, 88,  0,   0,   0,   128, 0,   117, 0,   0,   0,   257,
    285, 0,   16,  0,   191, 0,   0,   12,  0,   339, 71,  323, 21,  99,  0,   0,   187, 0,   22,
    167, 274, 0,   258, 0,   0,   0,   17,  30,  0,   0,   0,   181, 218, 0,   0,   109, 0,   212,
    154, 332, 54,  259, 0,   0,   0,   319, 14,  149, 82,  50,  0,   0,   15,  218, 0,   0,   0,
    0,   123, 0,   218, 162, 0,   50,  226, 219, 0,   86,  120, 310, 197, 101, 0,   0,   0,   0,
    127, 1,   207, 86,  0,   0,   0,   377, 0,   8,   75,  0,   0,   395, 106, 374, 0,   197, 0,
    356, 179, 297, 0,   3,   70,  0,   164, 7,   0,   0,   136, 0,   250, 193, 0,   52,  319, 248,
    0,   357, 112, 0,   77,  0,   0,   0,   230, 136, 81,  101, 0,   217, 0,   0,   0,   37,  0,
    172, 0,   0,   0,   14,  175, 0,   53,  361, 0,   134, 191, 304, 43,  0,   0,   198, 0,   82,
    0,   336, 0,   0,   0,   338, 280, 0,   386, 360, 8,   139, 87,  30,  281, 0,   0,   0,   11,
    262, 389, 301, 236, 36,  190, 150, 0,   0,   0,   325, 0,   388, 0,   155, 33,  379, 6,   4,
    0,   165, 129, 214, 369, 0,   0,   17};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 407;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 407;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh

#endif  // ANGLE_TRANSLATOR_ESSL_ONLY
