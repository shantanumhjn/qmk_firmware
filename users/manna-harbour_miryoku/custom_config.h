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


# ifdef POINTING_DEVICE_ENABLE
#   define SPLIT_POINTING_ENABLE
#   define POINTING_DEVICE_RIGHT
#   define CIRQUE_PINNACLE_DIAMETER_MM 40

// absolute mode
#   define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
#   define CIRQUE_PINNACLE_TAP_ENABLE                                   // only works on master
#   define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
// #   define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE

// relative mode
// #   define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
// #   define CIRQUE_PINNACLE_TAP_ENABLE
// #   define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
// #   define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

# endif


#ifdef RGB_MATRIX_ENABLE
  // #define RGB_MATRIX_KEYPRESSES
  // #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
  #define RGB_DISABLE_WHEN_USB_SUSPENDED
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
  #define RGB_MATRIX_VAL_STEP 5
  #define RGB_MATRIX_SPD_STEP 10
  #define RGB_DISABLE_TIMEOUT 60000                     // https://docs.qmk.fm/#/feature_rgb_matrix?id=additional-configh-options

  // Effects
  // #define ENABLE_RGB_MATRIX_SPLASH                    // Full gradient & value pulse away from a single key hit then fades value out
  #define ENABLE_RGB_MATRIX_BREATHING                 // Single hue brightness cycling animation
#endif

#ifdef OLED_ENABLE
  #define SPLIT_LAYER_STATE_ENABLE
  #define SPLIT_LED_STATE_ENABLE
  #define SPLIT_MODS_ENABLE
  // #define SPLIT_OLED_ENABLE
  #define OLED_TIMEOUT 60000
  #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#endif


#define XXX KC_NO
// add mapping to some unused keys
#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_TAB,   K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_BSLS, \
KC_CAPS,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_QUOT, \
XXX,      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_GRV , \
                      K32,  K33,  K34,         K35,  K36,  K37 \
)


// base layer
// swap backspace and space
// backslash instead of quote
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,                KC_G,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_SCLN,           \
LCTL_T(KC_A),      LALT_T(KC_R),      LGUI_T(KC_S),      LSFT_T(KC_T),        KC_D,              KC_H,              LSFT_T(KC_N),       LGUI_T(KC_E),      LALT_T(KC_I),      LCTL_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,                KC_B,              KC_K,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),   LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),   LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_EXTRA \
KC_Q,              KC_W,              KC_F,              KC_P,                KC_G,              KC_J,              KC_L,               KC_U,              KC_Y,              KC_SCLN,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),        KC_D,              KC_H,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,                KC_B,              KC_K,              KC_M,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_BSPC),   LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_SPC),   LT(U_FUN,KC_DEL),  U_NP,              U_NP


// nav layer
// replace backspace with space
// add ctrl + win to workspace movements
#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_SPC,            KC_DEL,            U_NP,              U_NP


// function layer
// replace space with backspace
#define MIRYOKU_LAYER_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_APP,            KC_BSPC,           KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
