// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// IGNORE_MOD_TAP_INTERRUPT is the default now
// #define IGNORE_MOD_TAP_INTERRUPT

// https://precondition.github.io/home-row-mods#tapping-force-hold
// https://docs.qmk.fm/#/tap_hold?id=tapping-force-hold
// this has been replaced by QUICK_TAP_TERM, link above, this should be set to 0 as already set my miryoku by default
// #define TAPPING_FORCE_HOLD


// https://precondition.github.io/home-row-mods#permissive-hold
// https://docs.qmk.fm/#/tap_hold?id=permissive-hold
#define PERMISSIVE_HOLD


// base layer for windows
#define MIRYOKU_LAYER_EXTRA \
KC_Q,              KC_W,              KC_F,              KC_P,                KC_G,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),        KC_D,              KC_H,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,                KC_B,              KC_K,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),   LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),   LT(U_FUN,KC_DEL),  U_NP,              U_NP
