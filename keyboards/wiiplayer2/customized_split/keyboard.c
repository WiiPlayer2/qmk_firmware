#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
// only for intellisense
#include "quantum/quantum.h"
#include "quantum/rgb_matrix/rgb_matrix_types.h"
#include "quantum/color.h"
#include "config.h"

#define RGB_MATRIX_ENABLE
#endif

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    // debug_matrix=true;
    //debug_keyboard=true;
    //debug_mouse=true;
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }

    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    if (debug_enable) {
        // uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    }
#endif
  return true;
}

#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) {
        return false;
    }

#ifdef RGB_SHIFT_LAYER_COLOR
    if (get_highest_layer(layer_state) > 0) {
#define __START_LAYER 1
#else
#define __START_LAYER 0
#endif
        uint8_t highest_layer = get_highest_layer(layer_state);

        for (uint8_t layer = __START_LAYER; layer <= highest_layer; layer++) {
            if (!layer_state_is(layer)) {
                continue;
            }

#ifdef RGB_SHIFT_LAYER_COLOR
            HSV layer_color_hsv = {
                .h = rgb_matrix_get_hue() + layer * 32,
                .s = 255,
                .v = rgb_matrix_get_val()
            };
            RGB layer_color = hsv_to_rgb(layer_color_hsv);
#endif

            for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
                for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                    uint8_t index = g_led_config.matrix_co[row][col];
                    uint16_t keycode = keymap_key_to_keycode(layer, (keypos_t){col,row});

                    if (index >= led_min
                        && index < led_max
                        && index != NO_LED
                        && keycode > KC_TRNS) {
#ifdef RGB_KEYCODE_COLOR
                        RGB layer_color = {
                            .r = (uint8_t)((keycode & 0xF800) >> 8),
                            .g = (uint8_t)((keycode & 0x07E0) >> 3),
                            .b = (uint8_t)(keycode & 0x001F),
                        };
#endif
                        rgb_matrix_set_color(index, layer_color.r, layer_color.g, layer_color.b);
                    }
                }
            }
        }
#ifdef RGB_SHIFT_LAYER_COLOR
    }
#endif
    return false;
}
#endif
