/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "MKS GEN L"

//
// Heaters / Fans
//
// Power outputs EFBF or EFBE
#define MOSFET_D_PIN 7

//
// CS Pins wired to avoid conflict with the LCD
// See https://www.thingiverse.com/asset:66604
//

#ifndef X_CS_PIN
  #define X_CS_PIN 59
#endif

#ifndef Y_CS_PIN
  #define Y_CS_PIN 63
#endif

#include "pins_RAMPS.h"

#if ENABLED(ANET_FULL_GRAPHICS_LCD)
  #undef BTN_EN1
  #undef BTN_EN2
  #undef BTN_ENC
  #undef BEEPER_PIN
  #undef LCD_PINS_D4     
  #undef LCD_PINS_ENABLE 
  #undef LCD_PINS_RS     
  #undef ST7920_DELAY_1
  #undef ST7920_DELAY_2
  #undef ST7920_DELAY_3
  #define BTN_EN1            23
  #define BTN_EN2            27
  #define BTN_ENC            17
  #define BEEPER_PIN         37
  #define LCD_PINS_D4        35
  #define LCD_PINS_ENABLE    25
  #define LCD_PINS_RS        29
  #define ST7920_DELAY_1 DELAY_NS(0)
  #define ST7920_DELAY_2 DELAY_NS(63)
  #define ST7920_DELAY_3 DELAY_NS(125)
  #define STD_ENCODER_PULSES_PER_STEP 4
  #define STD_ENCODER_STEPS_PER_MENU_ITEM 1
#endif