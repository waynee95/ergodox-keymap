#include QMK_KEYBOARD_H
#include "debug.h"
#include "keymap_german.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols layer

// transparent key code (that falls back to the layers below it
#define ___ KC_TRNS

// blocking key code (does nothing but prevent falling back to another layer
#define XXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // layer 0 : default
    [BASE] = LAYOUT_ergodox_pretty(
       KC_ESC,    KC_1,        KC_2, KC_3,    KC_4, KC_5, ___,        ___,  KC_6, KC_7,    KC_8,    KC_9,   KC_0,           DE_SS,
       KC_TAB,    KC_Q,        KC_W, KC_E,    KC_R, KC_T, ___,        ___,  DE_Z, KC_U,    KC_I,    KC_O,   KC_P,           DE_UE,
       KC_CAPS,   KC_A,        KC_S, KC_D,    KC_F, KC_G,                   KC_H, KC_J,    KC_K,    KC_L,   DE_OE,          DE_AE,
       KC_LSHIFT, CTL_T(DE_Y), KC_X, KC_C,    KC_V, KC_B, ___,        ___,  KC_N, KC_M,    KC_COMM, KC_DOT, CTL_T(DE_MINS), KC_RSHIFT,
       ___,       ___,          ___, KC_LEFT, KC_RIGHT,                           KC_DOWN, KC_UP,   ___,    ___,      ___,

                                              ___, ___,        ___, ___,
                                               DE_ALGR,        KC_LCTRL,
                              KC_SPC, KC_BSPC, KC_LALT,        KC_DEL, MO(SYMB), KC_ENT

    )

    // TODO: add symbols layer
};

