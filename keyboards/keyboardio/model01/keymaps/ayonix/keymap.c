/* Copyright 2018 James Laird-Wah
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_german.h"

#include "ayonix.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_wrapper(
  QK_BOOT  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , TG(NUM),
  ___________ALPHA1_L1___________   , RGB_MOD,    _______, ___________ALPHA1_R1___________,
  ___________ALPHA1_L2___________   , KC_TAB ,    KC_ENT , ___________ALPHA1_R2___________,
  ___________ALPHA1_L3___________   , KC_ESC ,    _______, ___________ALPHA1_R3___________,
                                         ALPHA_LT1,                                 ALPHA_RT3,
                                             ALPHA_LT2,                           ALPHA_RT2,
                                               ALPHA_LT3,                     ALPHA_RT1,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
  [EXTRA] = LAYOUT_wrapper(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
  ___________ALPHA2_L1___________, _______,    _______, ___________ALPHA2_R1___________,
  ___________ALPHA2_L2___________, _______,    _______, ___________ALPHA2_R2___________,
  ___________ALPHA2_L3___________, _______,    _______, ___________ALPHA2_R3___________,
                                         ALPHA_LT1,                                 ALPHA_RT3,
                                             ALPHA_LT2,                           ALPHA_RT2,
                                               ALPHA_LT3,                     ALPHA_RT1,
                                                  _______,               _______,
                                      _______,                                        _______
  ),
  [GAME]= LAYOUT_wrapper(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5,                      _______, _______, _______, _______, _______, _______,
  ___________GAME_L1___________, _______,    _______, ___________GAME_R1___________,
  ___________GAME_L2___________, _______,    _______, ___________GAME_R2___________,
  ___________GAME_L3___________, _______,    _______, ___________GAME_R3___________,
                                            GAME_LT1,                           GAME_RT3,
                                               GAME_LT2,                     GAME_RT2,
                                                  GAME_LT3,               GAME_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [GAME2]= LAYOUT_wrapper(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5,                      _______, _______, _______, _______, _______, _______,
  ___________GAME2_L1___________, _______,    _______, ___________GAME2_R1___________,
  ___________GAME2_L2___________, _______,    _______, ___________GAME2_R2___________,
  ___________GAME2_L3___________, _______,    _______, ___________GAME2_R3___________,
                                            GAME2_LT1,                           GAME2_RT3,
                                               GAME2_LT2,                     GAME2_RT2,
                                                  GAME2_LT3,               GAME2_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [NAV]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________NAV_L1___________, _______,    _______, ___________NAV_R1___________,
  ___________NAV_L2___________, _______,    _______, ___________NAV_R2___________,
  ___________NAV_L3___________, _______,    _______, ___________NAV_R3___________,
                                            NAV_LT1,                           NAV_RT3,
                                               NAV_LT2,                     NAV_RT2,
                                                  NAV_LT3,               NAV_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [MOUSE]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________MOUSE_L1___________, _______,    _______, ___________MOUSE_R1___________,
  ___________MOUSE_L2___________, _______,    _______, ___________MOUSE_R2___________,
  ___________MOUSE_L3___________, _______,    _______, ___________MOUSE_R3___________,
                                            MOUSE_LT1,                           MOUSE_RT3,
                                               MOUSE_LT2,                     MOUSE_RT2,
                                                  MOUSE_LT3,               MOUSE_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [MEDIA]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________MEDIA_L1___________, _______,    _______, ___________MEDIA_R1___________,
  ___________MEDIA_L2___________, _______,    _______, ___________MEDIA_R2___________,
  ___________MEDIA_L3___________, _______,    _______, ___________MEDIA_R3___________,
                                            MEDIA_LT1,                           MEDIA_RT3,
                                               MEDIA_LT2,                     MEDIA_RT2,
                                                  MEDIA_LT3,               MEDIA_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [NUM]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________NUM_L1___________, _______,    _______, ___________NUM_R1___________           ,
  ___________NUM_L2___________, _______,    _______, ___________NUM_R2___________,
  ___________NUM_L3___________, _______,    _______, ___________NUM_R3___________           ,
                                            NUM_LT1,                           NUM_RT3,
                                               NUM_LT2,                     NUM_RT2,
                                                  NUM_LT3,               NUM_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [SYM]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________SYM_L1___________, _______,    _______, ___________SYM_R1___________,
  ___________SYM_L2___________, _______,    _______, ___________SYM_R2___________,
  ___________SYM_L3___________, _______,    _______, ___________SYM_R3___________,
                                            SYM_LT1,                           SYM_RT3,
                                               SYM_LT2,                     SYM_RT2,
                                                  SYM_LT3,               SYM_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [FUN]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________FUN_L1___________, _______,    _______, ___________FUN_R1___________,
  ___________FUN_L2___________, _______,    _______, ___________FUN_R2___________,
  ___________FUN_L3___________, _______,    _______, ___________FUN_R3___________,
                                            FUN_LT1,                           FUN_RT3,
                                               FUN_LT2,                     FUN_RT2,
                                                  FUN_LT3,               FUN_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  ),
  [BUTTON]= LAYOUT_wrapper(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  ___________BUTTON_L1___________, _______,    _______, ___________BUTTON_R1___________,
  ___________BUTTON_L2___________, _______,    _______, ___________BUTTON_R2___________,
  ___________BUTTON_L3___________, _______,    _______, ___________BUTTON_R3___________,
                                            BUTTON_LT1,                           BUTTON_RT3,
                                               BUTTON_LT2,                     BUTTON_RT2,
                                                  BUTTON_LT3,               BUTTON_RT1,
                                         _______,                                 _______,
                                      _______,                                        _______
  )
};

/* template for new layouts:
LAYOUT(
  _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
*/

// clang-format on

static void set_numpad_colours(int on, void (*write)(int, uint8_t, uint8_t, uint8_t)) {
    if (!on) {
        for (int i = 44; i <= 60; i++)
            write(i, 0, 0, 0);
        write(63, 0, 0, 0);
        return;
    }

    /* main number keys */
    for (int i = 44; i <= 47; i++)
        write(i, 255, 0, 0);
    for (int i = 49; i <= 54; i++)
        write(i, 255, 0, 0);

    /* accessory keys */
    write(48, 128, 128, 0);
    for (int i = 55; i <= 59; i++)
        write(i, 128, 128, 0);

    // enter
    write(63, 0, 128, 0);

    // num key
    write(60, 128, 0, 128);
}

#ifdef RGB_MATRIX_ENABLE
/* the RGB matrix effects will overwrite the numpad indicator.
 * this handy mechanism allows to override the matrix effects.
 */
bool rgb_matrix_indicators_user(void) {
    if (layer_state & (1 << NUM)) {
        set_numpad_colours(1, &rgb_matrix_set_color);
    }
    return false;
}
#else /* no RGB matrix support */

layer_state_t layer_state_set_user(layer_state_t state) {
    if (state & (1 << NUM)) {
        set_numpad_colours(1, &set_led_to);
    } else {
        set_numpad_colours(0, &set_led_to);
    }

    return state;
}
#endif

/* vim: set ts=2 sw=2 et: */
