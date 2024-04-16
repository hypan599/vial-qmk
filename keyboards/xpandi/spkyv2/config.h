// Copyright 2024 hypan599 (@hypan599)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 10
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

// #define LAYOUT_all LAYOUT_default

/*
#define LAYOUT_default( \
    K060, K050, K040, K030, K020, K010, K000,         K009, K019, K029, K039, K049, K059,   K069,  \
    K061,   K051, K041, K031, K021, K011,         K008, K018, K028, K038, K048, K058, K068, K001 \
    K062,    K052, K042, K032, K022, K012,            K007, K017, K027, K037, K047, K057,   K067, \
    K063, K053, K043, K033, K023, K013, K003,           K006, K016, K026, K036, K046, K056, K066, \
    K064, K054, K044, K034, K024, K014,               K005,   K015, K025, K035, K045, K055, K065, K004  \
) { \
    { K000,  K001,  KC_NO,  K003,  K004,  K005,  K006,  K007,  K008,  K009 }, \
    { K010,  K011,  K012,   K013,  K014,  K015,  K016,  K017,  K018,  K019 }, \
    { K020,  K021,  K022,   K023,  K024,  K025,  K026,  K027,  K028,  K029 }, \
    { K030,  K031,  K032,   K033,  K034,  K035,  K036,  K037,  K038,  K039 }, \
    { K040,  K041,  K042,   K043,  K044,  K045,  K046,  K047,  K048,  K049 }, \
    { K050,  K051,  K052,   K053,  K054,  K055,  K056,  K057,  K058,  K059 }, \
    { K060,  K061,  K062,   K063,  K064,  K065,  K066,  K067,  K068,  K069 } \
}
*/
