// Copyright 2023 WiiPlayer2 (@WiiPlayer2)
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

#define RGB_MATRIX_DEFAULT_VAL 50
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE

#define SOLENOID_PIN B6
// #define SOLENOID_DEFAULT_BUZZ 1

#define GRAVE_ESC_CTRL_OVERRIDE
