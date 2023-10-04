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
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 100
// #define RGB_MATRIX_TYPING_HEATMAP_SPREAD 40

#define SOLENOID_PIN B6
// #define SOLENOID_DEFAULT_BUZZ 1

#define GRAVE_ESC_CTRL_OVERRIDE

#define SPLIT_LAYER_STATE_ENABLE

#define AUDIO_PIN B6
#define AUDIO_INIT_DELAY
