// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
// only for intellisense
#include "quantum/quantum.h"
#include "quantum/keycodes.h"
#include "config.h"
#endif

#include "keymap_german.h"
#include "sendstring_german.h"

#define LY_NAV 1
#define LY_BRA 2
#define LY_NUM 3
#define LY_CFG 4

enum custom_keycodes {
    M_LAMBDA = SAFE_RANGE,
    M_BCKTCK,
};

#define MY_QCKAC LCTL(DE_DOT) // quick action
#define MY_Q_ALT LALT_T(KC_Q) // Q, ALT when held

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC,        KC_1,       KC_2,       KC_3,       KC_4,                   KC_5,               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_TAB,         MY_Q_ALT,   KC_W,       KC_E,       KC_R,                   KC_T,               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_LEFT_SHIFT,  KC_A,       KC_S,       KC_D,       KC_F,                   KC_G,               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LEFT_CTRL,   KC_Z,       KC_X,       KC_C,       KC_V,                   KC_B,               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NUHS,
                                                KC_TAB,     KC_HOME,                KC_RALT,            KC_RGUI,    KC_END,     KC_LALT,
                                                MO(LY_NAV), LT(LY_BRA,KC_SPACE),    KC_BACKSPACE,       KC_DEL,     KC_ENTER,   MO(LY_NUM)
    ),
    [LY_NAV] = LAYOUT(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,              KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        _______,    KC_LEFT,    KC_UP,      KC_DOWN,    KC_RIGHT,   _______,            _______,    KC_MPRV,    KC_MPLY,    KC_MNXT,    _______,    KC_MUTE,
        _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    KC_VOLU,
        _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    KC_VOLD,
                                            _______,    _______,    _______,            _______,    _______,    _______,
                                            _______,    MO(LY_CFG), _______,            _______,    _______,    MY_QCKAC
    ),
    [LY_BRA] = LAYOUT(
        _______,    _______,        _______,    _______,        _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    RALT(KC_7),     KC_ASTR,    KC_LPRN,        RALT(KC_0), M_BCKTCK,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    RALT(KC_8),     KC_NUBS,    LSFT(KC_NUBS),  RALT(KC_9), DE_CIRC,            _______,    _______,    _______,    _______,    _______,    _______,
        _______,    RALT(KC_NUBS),  KC_AMPR,    RALT(KC_MINS),  KC_BSLS,    M_LAMBDA,           _______,    _______,    _______,    _______,    _______,    _______,
                                                _______,        _______,    _______,            _______,    _______,    _______,
                                                _______,        _______,    _______,            _______,    _______,    _______
    ),
    [LY_NUM] = LAYOUT(
        _______,    _______,    _______,    _______,    _______,    _______,            KC_NUM,     KC_P7,      KC_P8,      KC_P9,      KC_PSLS,    _______,
        _______,    _______,    KC_PSCR,    KC_SCRL,    KC_PAUS,    _______,            _______,    KC_P4,      KC_P5,      KC_P6,      KC_PAST,    _______,
        _______,    _______,    KC_INS,     KC_HOME,    KC_PGUP,    _______,            _______,    KC_P1,      KC_P2,      KC_P3,      KC_PMNS,    _______,
        _______,    _______,    KC_DEL,     KC_END,     KC_PGDN,    _______,            _______,    KC_P0,      KC_PDOT,    KC_PEQL,    KC_PPLS,    _______,
                                            _______,    _______,    _______,            _______,    _______,    _______,
                                            MY_QCKAC,   _______,    _______,            _______,    _______,    _______
    ),
    [LY_CFG] = LAYOUT(
        EE_CLR,     _______,    _______,    _______,    _______,    _______,            RGB_HUD,    RGB_HUI,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            RGB_SAD,    RGB_SAI,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            RGB_VAD,    RGB_VAI,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,            RGB_SPD,    RGB_SPI,    _______,    _______,    _______,    _______,
                                            _______,    _______,    _______,            RGB_MOD,    _______,    DB_TOGG,
                                            _______,    _______,    _______,            RGB_TOG,    _______,    QK_BOOT
    ),
    // [x] = LAYOUT(
    //     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    //     _______,    _______,    _______,    _______,    _______,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
    //                                         _______,    _______,    _______,            _______,    _______,    _______,
    //                                         _______,    _______,    _______,            _______,    _______,    _______
    // ),
};

#define MACRO(kc, str) \
    case kc: if (record->event.pressed) { SEND_STRING(str); } break;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        MACRO(M_LAMBDA, "=>")
        MACRO(M_BCKTCK, "`")
    }
    return true;
};
