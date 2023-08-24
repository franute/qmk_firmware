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
//#define MASTER_RIGHT
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
//     :uf2-split-righ
// usage: make crkbd:franutenoled:avrdude-split-left

#define USE_SERIAL_PD2
#define FORCE_NKRO

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD

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