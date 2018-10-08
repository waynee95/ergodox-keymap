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
       KC_ESC,    KC_1, KC_2, KC_3,    KC_4, KC_5, ___,        ___,  KC_6, KC_7,    KC_8,    KC_9,   KC_0,    DE_SS,
       KC_TAB,    KC_Q, KC_W, KC_E,    KC_R, KC_T, ___,        ___,  DE_Z, KC_U,    KC_I,    KC_O,   KC_P,    DE_UE,
       KC_CAPS,   KC_A, KC_S, KC_D,    KC_F, KC_G,                   KC_H, KC_J,    KC_K,    KC_L,   DE_OE,   DE_AE,
       KC_LSHIFT, DE_Y, KC_X, KC_C,    KC_V, KC_B, ___,        ___,  KC_N, KC_M,    KC_COMM, KC_DOT, DE_MINS, KC_RSHIFT,
       ___,       ___,   ___, KC_LEFT, KC_RIGHT,                           KC_DOWN, KC_UP,   ___,    ___,      ___,

                                              ___, ___,        ___, ___,
                                               DE_ALGR,        KC_DEL,
                              KC_SPC, KC_BSPC, KC_LCTRL,       KC_LALT, MO(SYMB), KC_ENT

    ),

    // layer 1 : symbols
    [SYMB] = LAYOUT_ergodox_pretty(
       ___, KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_F5,         ___,      ___, KC_F6,   KC_F7,   KC_F8,         KC_F9,   KC_F10,  KC_F11,
       ___, XXX,     DE_LESS, DE_LCBR, LSFT(KC_7), ALGR(DE_PLUS), ___,      ___, DE_PERC, DE_AT,   DE_RCBR,       DE_MORE, XXX,     KC_F12,
       ___, DE_QUOT, DE_EQL,  DE_MINS, DE_LPRN,    DE_PLUS,                      DE_ASTR, DE_RPRN, LSFT(DE_MINS), DE_BSLS, DE_DQOT, ___,
       ___, DE_GRV,  DE_QST,  DE_HASH, DE_LBRC,    ALGR(DE_LESS), ___,      ___, DE_AMPR, DE_RBRC, DE_DLR,        DE_EXLM, DE_CIRC, ___,
       ___,    ___,   ___,  ___,     ___,                                                 ___,     ___,      ___,    ___,      ___,

                                              ___, ___,        ___, ___,
                                                   ___,        ___,
                                         ___, ___, ___,        ___, ___, ___

    ),
};

