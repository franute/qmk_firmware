// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "defines.h"

// Tap Dance declarations
enum {
  TD_CBR = 0,
  TC_BRC,
};

enum layer_number {
  _QWERTY = 0,
  _GAME,
  _LOWER,
  _RAISE,
  _FUNCTION,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ESC,
        LC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LALT, KC_LGUI, LOW_ENT,          RAI_SPC, FN_BCK, RAI_BCK
    ),
    [_GAME] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, _______,                               _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                               _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                               _______, _______, _______, _______, _______, _______,
                                            _______, LOW_GUI, KC_SPC,          RAI_ENT, _______, _______
    ),
    [_LOWER] = LAYOUT_split_3x6_3(
        XXXXXXX, LALT(KC_F4), XXXXXXX, LGUI(KC_H), KC_PSCR, KC_PGUP,                        KC_GRV, KC_HOME,   KC_UP,  KC_END, KC_VOLU,  KC_INS,
        _______, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_PGDN,                               KC_TAB, KC_LEFT, KC_DOWN,KC_RIGHT, KC_VOLD, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, XXXXXXX,
                                            _______, _______, _______,          KC_DELETE,KC_BSPC, ADJUST
    ),
    [_RAISE] = LAYOUT_split_3x6_3(
        XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
        _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
        _______,  S_NUBS, KC_NUBS,   TD(1),   TD(0), KC_UNDS,                            KC_MINS, KC_PLUS,  KC_EQL,  KC_DOT, XXXXXXX, KC_PIPE,
                                            _______, _______, KC_BSPC,          _______, KC_RALT, XXXXXXX
    ),
    [_FUNCTION] = LAYOUT_split_3x6_3(
        XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                            XXXXXXX, KC_LALT, KC_LGUI, KC_RCTL, KC_RSFT, XXXXXXX,
        XXXXXXX,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            _______, _______, _______,          _______, _______, _______
    ),
    [_ADJUST] = LAYOUT_split_3x6_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   RESET,                             XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX, TG_GAME,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_G,                             XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_B,                             XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX,
                                            XXXXXXX, _______, _______,           _______, _______, XXXXXXX
    ),
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_CBR] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
    [TC_BRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
};