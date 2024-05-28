/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

// wiring of each half
/*
#define MATRIX_COL_PINS { F5, C6, B6, D7, E6, D0}
#define MATRIX_ROW_PINS { F4, F6, B1, B2, B5 }
#define MATRIX_COL_PINS_RIGHT { F7, D0, B1, D7, B2, D1}
#define MATRIX_ROW_PINS_RIGHT { C6, E6, B5, B3, B6 }
*/
#define MATRIX_COL_PINS       { F5, C6, B6, D7, E6, D0, B4, D1}
#define MATRIX_ROW_PINS       { F4, F6, B1, B2, B5 }
#define MATRIX_COL_PINS_RIGHT { F7, D0, B1, D7, B2, D1, D4, B4}
#define MATRIX_ROW_PINS_RIGHT { C6, E6, B5, B3, B6 }

#define SOFT_SERIAL_PIN D3
#define EE_HANDS
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 500
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 800

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { F7 }
#define ENCODERS_PAD_A_RIGHT { F6 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }


// #define MASTER_RIGHT
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
// #define FORCE_NKRO
/* ws2812 RGB LED */
// #define RGB_DI_PIN D3
// #define RGBLED_NUM 12    // Number of LEDs
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_TWINKLE
