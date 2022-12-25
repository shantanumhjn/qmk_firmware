// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MASTER_RIGHT

#define IGNORE_MOD_TAP_INTERRUPT

// https://precondition.github.io/home-row-mods#tapping-force-hold
// https://docs.qmk.fm/#/tap_hold?id=tapping-force-hold
#define TAPPING_FORCE_HOLD


// https://precondition.github.io/home-row-mods#permissive-hold
// https://docs.qmk.fm/#/tap_hold?id=permissive-hold
#define PERMISSIVE_HOLD

// https://docs.qmk.fm/#/tap_hold?id=tapping-term
// seems to work fine for me,
// I have tendency to keep pinky fingers pressed
#undef TAPPING_TERM
#define TAPPING_TERM 250


#define U_WINCTRL LCTL(KC_LGUI)

// base layer for mac
// swap backspace and space
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,                KC_G,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LCTL_T(KC_A),      LALT_T(KC_R),      LGUI_T(KC_S),      LSFT_T(KC_T),        KC_D,              KC_H,              LSFT_T(KC_N),       LGUI_T(KC_E),      LALT_T(KC_I),      LCTL_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,                KC_B,              KC_K,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),   LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),   LT(U_FUN,KC_DEL),  U_NP,              U_NP

// base layer for windows
#define MIRYOKU_LAYER_EXTRA \
KC_Q,              KC_W,              KC_F,              KC_P,                KC_G,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),        KC_D,              KC_H,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,                KC_B,              KC_K,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),   LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),   LT(U_FUN,KC_DEL),  U_NP,              U_NP


// nav layer
// replace backspace with space
// add ctrl + win to workspace movements
#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,      U_WINCTRL,              CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_SPC,            KC_DEL,            U_NP,              U_NP


// function layer
// replace space with backspace
#define MIRYOKU_LAYER_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_APP,            KC_BSPC,           KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
