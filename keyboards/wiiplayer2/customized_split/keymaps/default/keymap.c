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
      * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ { │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┬───┬───┐   ┌───┬───┬───┐
      *               │   │   │   │   │   │   │   │
      *               ├───┼───┼───┤   ├───┼───┼───┤
      *               │(1)│   │Bsp│   │   │ ↲ │   │
      *               └───┴───┴───┘   └───┴───┴───┘
      */
    [0] = LAYOUT(
        KC_GRAVE,       KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_TAB,         KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_LEFT_SHIFT,  KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LEFT_CTRL,   KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    XXXXXXX,
                                                XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                MO(1),      KC_SPACE,   KC_BACKSPACE,       XXXXXXX,    KC_ENTER,   XXXXXXX
    ),
    [1] = LAYOUT(
        QK_BOOT,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        DB_TOGG,    KC_LEFT,    KC_UP,      KC_DOWN,    KC_RIGHT,   _______,            _______,    _______,    _______,    _______,    _______,    _______,
        RGB_MOD,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
                                            _______,    _______,    _______,            _______,    _______,    _______,
                                            _______,    _______,    _______,            _______,    _______,    _______
    ),
};
