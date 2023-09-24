// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
// only for intellisense
#include "quantum/quantum.h"
#include "quantum/keycodes.h"
#include "config.h"
#include ""
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │   │   │   │   │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┬───┬───┐   ┌───┬───┬───┐
      *               │   │   │   │   │   │   │   │
      *               ├───┼───┼───┤   ├───┼───┼───┤
      *               │(1)│   │Bsp│   │   │   │   │
      *               └───┴───┴───┘   └───┴───┴───┘
      */
    [0] = LAYOUT(
        KC_GRAVE,       KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_TAB,         KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_LEFT_SHIFT,  KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_LEFT_CTRL,   KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                MO(1),      KC_SPACE,   KC_BACKSPACE,       XXXXXXX,    XXXXXXX,    XXXXXXX
    ),
    [1] = LAYOUT(
        QK_BOOT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        DB_TOGG,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                                            _______,    _______,    _______,            _______,    _______,    _______,
                                            _______,    _______,    _______,            _______,    _______,    _______
    ),
};
