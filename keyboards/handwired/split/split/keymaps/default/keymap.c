// Copyright 2021 david@impstyle.com (@zwnk)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6(
        KC_ESC,  KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12, KC_PSCR,KC_PAUS,KC_DEL,
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,  KC_6  ,                KC_7  , KC_8  , KC_9  , KC_0 , KC_MINS, KC_EQL,    KC_CAPS,    KC_HOME,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,
        KC_BSPC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,KC_ENT,KC_PGDN,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,KC_UP, KC_END,
        KC_LCTL,KC_LGUI, KC_LALT, KC_SPC,                                        KC_SPC, KC_RALT, LOWER, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_LOWER] = LAYOUT_6x6(
        KC_ESC,  KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12, KC_PSCR,KC_PAUS,KC_DEL,
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,  KC_6  ,                KC_7  , KC_8  , KC_9  , KC_0 , KC_MINS, KC_EQL,    KC_BSPC,    KC_HOME,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,
        KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,KC_ENT,KC_PGDN,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,KC_UP, KC_END,
        KC_LCTL,KC_LGUI, KC_LALT, KC_SPC,                                        KC_SPC, KC_RALT, LOWER, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}