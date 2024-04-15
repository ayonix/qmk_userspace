/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "keymap_german.h"

#ifdef COMBO_ENABLE
#include "g/keymap_combo.h"
#endif

#include "ayonix.h"

#define LAYOUT_wrapper(...) LAYOUT_split_3x6_3(__VA_ARGS__)

// ß x m l b p  ' y o u ä ,
// k h s n t d  c r e i a .
// q f z v g w  j - ö / ü
/* [BASE] = LAYOUT_split_3x6_3(     // hsnt
    DE_SS,  DE_X,            DE_M,           DE_L,           DE_B,              DE_P,       DE_QUOT, DE_Y, DE_O, DE_U, DE_ADIA, DE_COMM,
    DE_K,   LGUI_T(DE_H),       LALT_T(DE_S),   LCTL_T(DE_N),   LSFT_T(DE_T),   DE_D,       DE_C, RSFT_T(DE_R), RCTL_T(DE_E), LALT_T(DE_I), RGUI_T(DE_A), DE_DOT,
    DE_Q,   LT(BUTTON,DE_F),    RALT_T(DE_Z),   DE_V,           DE_G,        DE_W,       DE_J, DE_DQUO, DE_ODIA, RALT_T(DE_SLSH), DE_UDIA, KC_F13,
                            LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB),               LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN, KC_DEL)
), */

// / j b l w c  ß y o u ä '
// q t n r d m  k s e i a x
// " v p , g f  z h ö . ü
/* [BASE]  = LAYOUT_split_3x6_3(     // tnrd
     DE_SLSH,  DE_J,       DE_B,           DE_L,           DE_W,             DE_C,       DE_SS, DE_Y, DE_O, DE_U, DE_ADIA, DE_QUOT,
     DE_Q, LGUI_T(DE_T),   LALT_T(DE_N),   LCTL_T(DE_R),   LSFT_T(DE_D),     DE_M,       DE_K, RSFT_T(DE_S), RCTL_T(DE_E), LALT_T(DE_I), RGUI_T(DE_A), DE_X,
     DE_DQUO,LT(BUTTON,DE_V),    RALT_T(DE_P),   DE_COMM,           DE_G,    DE_F,       DE_Z, DE_H, DE_ODIA, RALT_T(DE_DOT), DE_UDIA, KC_F13,
                         LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB),               LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN, KC_DEL)
 ), */

// ß l m g p  y b o u ä
// s r n t c  , h e i a
// z j w d v  k f ö . ü
/*
 [BASE] = LAYOUT_split_3x6_3(     // srntc
    KC_NO,  KC_NO,          DE_L,           DE_M,           DE_G,           DE_P,       DE_Y, DE_B, DE_O, DE_U, KC_NO, KC_NO,
    DE_SS,  LGUI_T(DE_S),   LALT_T(DE_R),   LCTL_T(DE_N),   LSFT_T(DE_T),   DE_C,       DE_COMM, RSFT_T(DE_H), RCTL_T(DE_E), LALT_T(DE_I), RGUI_T(DE_A), DE_ADIA,
    KC_NO,  LT(BUTTON,DE_Z),RALT_T(DE_J),   DE_W,           DE_D,           DE_V,       DE_K, DE_F, DE_ODIA, RALT_T(DE_DOT), DE_UDIA, KC_NO,
                        LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB),               LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN, KC_DEL)
),
*/

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_wrapper(
        ___________ALPHA1_L1___________,        ___________ALPHA1_R1___________,
        ___________ALPHA1_L2___________,        ___________ALPHA1_R2___________,
        ___________ALPHA1_L3___________,        ___________ALPHA1_R3___________,
        ___________ALPHA1_L4___________,        ___________ALPHA1_R4___________
    ),
    [EXTRA] = LAYOUT_wrapper(
        ___________ALPHA2_L1___________,        ___________ALPHA2_R1___________,
        ___________ALPHA2_L2___________,        ___________ALPHA2_R2___________,
        ___________ALPHA2_L3___________,        ___________ALPHA2_R3___________,
        ___________ALPHA2_L4___________,        ___________ALPHA2_R4___________
    ),
    [GAME] = LAYOUT_wrapper(
        ___________GAME_L1___________,        ___________GAME_R1___________,
        ___________GAME_L2___________,        ___________GAME_R2___________,
        ___________GAME_L3___________,        ___________GAME_R3___________,
        ___________GAME_L4___________,        ___________GAME_R4___________
    ),
    [GAME2] = LAYOUT_wrapper(
        ___________GAME2_L1___________,        ___________GAME2_R1___________,
        ___________GAME2_L2___________,        ___________GAME2_R2___________,
        ___________GAME2_L3___________,        ___________GAME2_R3___________,
        ___________GAME2_L4___________,        ___________GAME2_R4___________
    ),
    [NAV] = LAYOUT_wrapper(
        ___________NAV_L1___________,        ___________NAV_R1___________,
        ___________NAV_L2___________,        ___________NAV_R2___________,
        ___________NAV_L3___________,        ___________NAV_R3___________,
        ___________NAV_L4___________,        ___________NAV_R4___________
        ),
    [MOUSE] = LAYOUT_wrapper(
        ___________MOUSE_L1___________,        ___________MOUSE_R1___________,
        ___________MOUSE_L2___________,        ___________MOUSE_R2___________,
        ___________MOUSE_L3___________,        ___________MOUSE_R3___________,
        ___________MOUSE_L4___________,        ___________MOUSE_R4___________
        ),
    [MEDIA] = LAYOUT_wrapper(
        ___________MEDIA_L1___________,        ___________MEDIA_R1___________,
        ___________MEDIA_L2___________,        ___________MEDIA_R2___________,
        ___________MEDIA_L3___________,        ___________MEDIA_R3___________,
        ___________MEDIA_L4___________,        ___________MEDIA_R4___________
        ),
    [NUM] = LAYOUT_wrapper(
        ___________NUM_L1___________,        ___________NUM_R1___________,
        ___________NUM_L2___________,        ___________NUM_R2___________,
        ___________NUM_L3___________,        ___________NUM_R3___________,
        ___________NUM_L4___________,        ___________NUM_R4___________
        ),
    [SYM] = LAYOUT_wrapper(
        ___________SYM_L1___________,        ___________SYM_R1___________,
        ___________SYM_L2___________,        ___________SYM_R2___________,
        ___________SYM_L3___________,        ___________SYM_R3___________,
        ___________SYM_L4___________,        ___________SYM_R4___________
        ),
    [FUN] = LAYOUT_wrapper(
        ___________FUN_L1___________,        ___________FUN_R1___________,
        ___________FUN_L2___________,        ___________FUN_R2___________,
        ___________FUN_L3___________,        ___________FUN_R3___________,
        ___________FUN_L4___________,        ___________FUN_R4___________
        ),
    [BUTTON] = LAYOUT_wrapper(
        ___________BUTTON_L1___________,        ___________BUTTON_R1___________,
        ___________BUTTON_L2___________,        ___________BUTTON_R2___________,
        ___________BUTTON_L3___________,        ___________BUTTON_R3___________,
        ___________BUTTON_L4___________,        ___________BUTTON_R4___________
        )
};

// canary
    //  DE_SS,  DE_UDIA,            DE_L,           DE_Y,           DE_P,           DE_B,       DE_Z, DE_F, DE_O, DE_U, DE_ADIA, DE_DQUO,
    //     DE_W,   LGUI_T(DE_C),       LALT_T(DE_R),   LCTL_T(DE_S),   LSFT_T(DE_T),   DE_G,       DE_M, RSFT_T(DE_N), RCTL_T(DE_E), LALT_T(DE_I), RGUI_T(DE_A), DE_QUOT,
    //     DE_ODIA,LT(BUTTON,DE_Q),    RALT_T(DE_J),   DE_V,           DE_D,           DE_K,       DE_X, DE_H, DE_SLSH, RALT_T(DE_COMM), DE_DOT, KC_F13,
    //                             LT(MEDIA,KC_ESC), LT(NAV,KC_SPC), LT(MOUSE,KC_TAB),               LT(SYM,KC_ENT), LT(NUM,KC_BSPC), LT(FUN, KC_DEL)
// clang-format on

// miryoku sym
// XXXXXXX, DE_LCBR, DE_AMPR, DE_ASTR, DE_LPRN, DE_RCBR,     XXXXXXX, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_GAME), XXXXXXX, XXXXXXX,
// XXXXXXX, DE_COLN, DE_DLR, DE_PERC, DE_CIRC, DE_PLUS,      XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
// XXXXXXX, DE_TILD, DE_EXLM, DE_AT, DE_HASH, DE_PIPE,       XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
//                          DE_LPRN, DE_RPRN, DE_UNDS,     XXXXXXX, XXXXXXX, XXXXXXX

// media normal
// XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,
// XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,       XXXXXXX, DE_MPRV, DE_VOLD, DE_VOLU, DE_MNXT, XXXXXXX,
// XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                             XXXXXXX, XXXXXXX, XXXXXXX,        DE_MSTP, DE_MPLY, DE_MUTE
