/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

//#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
// AVR controllers with the Caterina bootloader (e.g. Pro Micro):
//     :avrdude-split-left
//     :avrdude-split-right
// AVR controllers with the stock Amtel DFU or DFU compatible bootloader (e.g. Elite-C):
//     :dfu-split-left
//     :dfu-split-right
// ARM controllers with a DFU compatible bootloader (e.g. Proton-C):
//     :dfu-util-split-left
//     :dfu-util-split-right
// ARM controllers with a UF2 compatible bootloader:
//     :uf2-split-left
//     :uf2-split-right
// qmk flash -kb crkbd -km franute -bl avrdude-util-split-left -e AVR_CFLAGS="-Wno-array-bounds"
// qmk flash -kb crkbd -km franute -bl avrdude-util-split-right -e AVR_CFLAGS="-Wno-array-bounds"


#define USE_SERIAL_PD2
#define FORCE_NKRO

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD

#ifdef RGBLIGHT_ENABLE
#  undef RGBLED_NUM
#  define RGBLED_NUM 27
#  define RGBLIGHT_HUE_STEP 8
#  define RGBLIGHT_SAT_STEP 8
#  define RGBLIGHT_VAL_STEP 5
#  define RGBLIGHT_LIMIT_VAL 200
#endif

#ifdef RGB_MATRIX_ENABLE
#  define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120    // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#  define RGB_MATRIX_HUE_STEP 8
#  define RGB_MATRIX_SAT_STEP 8
#  define RGB_MATRIX_VAL_STEP 5
#  define RGB_MATRIX_SPD_STEP 10
//#  define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
//#  define DISABLE_RGB_MATRIX_SOLID_COLOR         // Static single hue, no speed support
//#  define DISABLE_RGB_MATRIX_ALPHAS_MODS             // Static dual hue, speed is hue for secondary hue
//#  define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN        // Static gradient top to bottom, speed controls how much gradient changes
//#  define DISABLE_RGB_MATRIX_BREATHING               // Single hue brightness cycling animation
//#  define DISABLE_RGB_MATRIX_BAND_SAT                // Single hue band fading saturation scrolling left to right
//#  define DISABLE_RGB_MATRIX_BAND_VAL                // Single hue band fading brightness scrolling left to right
//#  define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT       // Single hue 3 blade spinning pinwheel fades saturation
//#  define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL       // Single hue 3 blade spinning pinwheel fades brightness
//#  define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT         // Single hue spinning spiral fades saturation
//#  define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL         // Single hue spinning spiral fades brightness
//#  define DISABLE_RGB_MATRIX_CYCLE_ALL               // Full keyboard solid hue cycling through full gradient
//#  define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT        // Full gradient scrolling left to right
//#  define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN           // Full gradient scrolling top to bottom
//#  define DISABLE_RGB_MATRIX_CYCLE_OUT_IN            // Full gradient scrolling out to in
//#  define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL       // Full dual gradients scrolling out to in
//#  define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradent Chevron shapped scrolling left to right
//#  define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL          // Full gradient spinning pinwheel around center of keyboard
//#  define DISABLE_RGB_MATRIX_CYCLE_SPIRAL            // Full gradient spinning spiral around center of keyboard
//#  define DISABLE_RGB_MATRIX_DUAL_BEACON             // Full gradient spinning around center of keyboard
//#  define DISABLE_RGB_MATRIX_RAINBOW_BEACON          // Full tighter gradient spinning around center of keyboard
//#  define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS       // Full dual gradients spinning two halfs of keyboard
//#  define DISABLE_RGB_MATRIX_RAINDROPS               // Randomly changes a single key's hue
//#  define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS     // Randomly changes a single key's hue and saturation
//#  define RGB_MATRIX_FRAMEBUFFER_EFFECTS // for the heatmap effect
//#  ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS
//#    define DISABLE_RGB_MATRIX_TYPING_HEATMAP // How hot is your WPM!
//#    define DISABLE_RGB_MATRIX_DIGITAL_RAIN   // That famous computer simulation
//#  endif
//#  define RGB_MATRIX_KEYPRESSES // reacts to keypresses
//#  ifdef RGB_MATRIX_KEYPRESSES
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE     // Pulses keys hit to hue & value then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE            // Static single hue, pulses keys hit to shifted hue then fades to current hue
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
//#    define DISABLE_RGB_MATRIX_SPLASH                    // Full gradient & value pulse away from a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_MULTISPLASH               // Full gradient & value pulse away from multiple key hits then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_SPLASH              // Hue & value pulse away from a single key hit then fades value out
//#    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH         // Hue & value pulse away from multiple key hits then fades value out
//#  endif
#endif // RGB_MATRIX_ENABLE

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
#   undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#   undef LOCKING_RESYNC_ENABLE
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION