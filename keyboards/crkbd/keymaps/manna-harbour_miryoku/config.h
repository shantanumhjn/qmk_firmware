// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  XXX, \
XXX,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  XXX, \
XXX,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  XXX , \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)

#define MASTER_RIGHT

# ifdef POINTING_DEVICE_ENABLE
#   define SPLIT_POINTING_ENABLE
#   define POINTING_DEVICE_RIGHT
#   undef CIRQUE_PINNACLE_DIAMETER_MM
#   define CIRQUE_PINNACLE_DIAMETER_MM 40

// absolute mode
#   define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
#   define CIRQUE_PINNACLE_TAP_ENABLE                                   // only works on master
#   define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#   define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE

// relative mode
// #   define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
// #   define CIRQUE_PINNACLE_TAP_ENABLE
// #   define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
// #   define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

# endif


#ifdef RGB_MATRIX_ENABLE
  #define RGB_MATRIX_KEYPRESSES
  #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
  #define RGB_DISABLE_WHEN_USB_SUSPENDED
  #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
  #define RGB_MATRIX_LED_FLUSH_LIMIT 16
  #define RGB_MATRIX_HUE_STEP 8
  #define RGB_MATRIX_SAT_STEP 8
  #define RGB_MATRIX_VAL_STEP 5
  #define RGB_MATRIX_SPD_STEP 10
  #define RGB_MATRIX_TIMEOUT 300000                     // https://docs.qmk.fm/#/feature_rgb_matrix?id=additional-configh-options
  // #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING  // do not know what this does

  // Effects
  #define ENABLE_RGB_MATRIX_ALPHAS_MODS	                          // Enables RGB_MATRIX_ALPHAS_MODS
  #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN	                    // Enables RGB_MATRIX_GRADIENT_UP_DOWN
  #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT	                  // Enables RGB_MATRIX_GRADIENT_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_BREATHING	                            // Enables RGB_MATRIX_BREATHING
  #define ENABLE_RGB_MATRIX_BAND_SAT	                            // Enables RGB_MATRIX_BAND_SAT
  #define ENABLE_RGB_MATRIX_BAND_VAL	                            // Enables RGB_MATRIX_BAND_VAL
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT	                    // Enables RGB_MATRIX_BAND_PINWHEEL_SAT
  #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL	                    // Enables RGB_MATRIX_BAND_PINWHEEL_VAL
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT	                      // Enables RGB_MATRIX_BAND_SPIRAL_SAT
  #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL	                      // Enables RGB_MATRIX_BAND_SPIRAL_VAL
  #define ENABLE_RGB_MATRIX_CYCLE_ALL	                            // Enables RGB_MATRIX_CYCLE_ALL
  #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT	                    // Enables RGB_MATRIX_CYCLE_LEFT_RIGHT
  #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN	                        // Enables RGB_MATRIX_CYCLE_UP_DOWN
  #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON	              // Enables RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN                          // Enables RGB_MATRIX_CYCLE_OUT_IN
  #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL	                    // Enables RGB_MATRIX_CYCLE_OUT_IN_DUAL
  #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL	                      // Enables RGB_MATRIX_CYCLE_PINWHEEL
  #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL	                        // Enables RGB_MATRIX_CYCLE_SPIRAL
  #define ENABLE_RGB_MATRIX_DUAL_BEACON	                          // Enables RGB_MATRIX_DUAL_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_BEACON	                      // Enables RGB_MATRIX_RAINBOW_BEACON
  #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS	                    // Enables RGB_MATRIX_RAINBOW_PINWHEELS
  #define ENABLE_RGB_MATRIX_RAINDROPS	                            // Enables RGB_MATRIX_RAINDROPS
  #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS                   // Enables RGB_MATRIX_JELLYBEAN_RAINDROPS
  #define ENABLE_RGB_MATRIX_HUE_BREATHING                         // Enables RGB_MATRIX_HUE_BREATHING
  #define ENABLE_RGB_MATRIX_HUE_PENDULUM	                        // Enables RGB_MATRIX_HUE_PENDULUM
  #define ENABLE_RGB_MATRIX_HUE_WAVE	                            // Enables RGB_MATRIX_HUE_WAVE 
  #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL	                        // Enables RGB_MATRIX_PIXEL_FRACTAL
  #define ENABLE_RGB_MATRIX_PIXEL_FLOW	                          // Enables RGB_MATRIX_PIXEL_FLOW
  #define ENABLE_RGB_MATRIX_PIXEL_RAIN	                          // Enables RGB_MATRIX_PIXEL_RAIN


  // These modes also require the RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES define to be available.
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE	                // Enables RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE	                      // Enables RGB_MATRIX_SOLID_REACTIVE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE	                  // Enables RGB_MATRIX_SOLID_REACTIVE_WIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS	                // Enables RGB_MATRIX_SOLID_REACTIVE_CROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS	                // Enables RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS	            // Enables RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  #define ENABLE_RGB_MATRIX_SPLASH	                              // Enables RGB_MATRIX_SPLASH
  #define ENABLE_RGB_MATRIX_MULTISPLASH	                          // Enables RGB_MATRIX_MULTISPLASH
  #define ENABLE_RGB_MATRIX_SOLID_SPLASH	                        // Enables RGB_MATRIX_SOLID_SPLASH
  #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH	                    // Enables RGB_MATRIX_SOLID_MULTISPLASH

  // These modes also require the RGB_MATRIX_FRAMEBUFFER_EFFECTS define to be available.
  #define ENABLE_RGB_MATRIX_TYPING_HEATMAP	                      // Enables RGB_MATRIX_TYPING_HEATMAP
  #define ENABLE_RGB_MATRIX_DIGITAL_RAIN	                        // Enables RGB_MATRIX_DIGITAL_RAIN

  #define ENABLE_RGB_MATRIX_EFFECT_MAX
#endif

#ifdef OLED_ENABLE
  #define SPLIT_LAYER_STATE_ENABLE
  #define SPLIT_LED_STATE_ENABLE
  #define SPLIT_MODS_ENABLE
  // #define SPLIT_OLED_ENABLE
  #define OLED_TIMEOUT 60000
  #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#endif
