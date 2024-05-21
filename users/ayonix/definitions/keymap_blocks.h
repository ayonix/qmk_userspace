#pragma once

#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "keycodes.h"

// clang-format off
  // recurva
  // f r d p v  q m u o y
  // s n t c b  . h e a i
  // z ß k g w  j l ö ' ,
#define ALPHA_LT1 LT(MEDIA,KC_ESC)
#define ALPHA_LT2 LT(NAV,KC_SPC)
#define ALPHA_LT3 LT(MOUSE,KC_TAB)
#define ___________ALPHA1_L1___________ KC_NO    , DE_F            , DE_R         , DE_D        , DE_P        , DE_V
#define ___________ALPHA1_L2___________ DE_F     , LGUI_T(DE_S)    , LALT_T(DE_N) , LCTL_T(DE_T), LSFT_T(DE_C), DE_B
#define ___________ALPHA1_L3___________ KC_NO    , LT(BUTTON, DE_Z), RALT_T(DE_SS), DE_K        , DE_G        , DE_W
#define ___________ALPHA1_L4___________ ALPHA_LT1, ALPHA_LT2       , ALPHA_LT3

#define ALPHA_RT1 LT(SYM,KC_ENT)
#define ALPHA_RT2 LT(NUM,KC_BSPC)
#define ALPHA_RT3 LT(FUN,KC_DEL)
#define ___________ALPHA1_R1___________ DE_Q     , DE_M        , DE_U        , DE_O        , DE_Y        , DE_X
#define ___________ALPHA1_R2___________ DE_DOT   , RSFT_T(DE_H), RCTL_T(DE_E), LALT_T(DE_A), RGUI_T(DE_I), DE_Y
#define ___________ALPHA1_R3___________ DE_J     , DE_L        , DE_ODIA     , DE_QUOT     , DE_COMM     , KC_NO
#define ___________ALPHA1_R4___________ ALPHA_RT1, ALPHA_RT2   , ALPHA_RT3

#define ___________ALPHA2_L1___________ DE_SS    , DE_Q            , DE_W             , DE_E        , DE_R        , DE_T
#define ___________ALPHA2_L2___________ DE_PLUS  , LGUI_T(DE_A)    , LALT_T(DE_S)     , LCTL_T(DE_D), LSFT_T(DE_F), DE_G
#define ___________ALPHA2_L3___________ DE_LABK  , LT(BUTTON, DE_Y), RALT_T(DE_X)     , DE_C        , DE_V        , DE_B
#define ___________ALPHA2_L4___________ ALPHA_LT1, LT(NAV, KC_SPC) , LT(MOUSE, KC_TAB)

#define ___________ALPHA2_R1___________ DE_Z           , DE_U            , DE_I        , DE_O          , DE_P           , DE_UDIA
#define ___________ALPHA2_R2___________ DE_H           , RSFT_T(DE_J)    , RCTL_T(DE_K), LALT_T(DE_L)  , RGUI_T(DE_ODIA), DE_ADIA
#define ___________ALPHA2_R3___________ DE_N           , DE_M            , DE_COMM     , RALT_T(DE_DOT), DE_MINS        , DE_HASH
#define ___________ALPHA2_R4___________ LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL)

#define GAME_LT1 LALT_T(KC_ESC)
#define GAME_LT2 KC_SPC
#define GAME_LT3 MO(GAME2)
#define ___________GAME_L1___________ KC_F3   , KC_TAB  , DE_Q    , DE_W, DE_E, DE_R
#define ___________GAME_L2___________ KC_F2   , KC_LSFT , DE_A    , DE_S, DE_D, DE_F
#define ___________GAME_L3___________ KC_F1   , KC_LCTL , DE_Y    , DE_X, DE_C, DE_V
#define ___________GAME_L4___________ GAME_LT1, GAME_LT2, GAME_LT3

#define GAME_RT1 LT(SYM,KC_ENT)
#define GAME_RT2 LT(NUM,KC_BSPC)
#define GAME_RT3 LT(FUN, KC_DEL)
#define ___________GAME_R1___________ DE_Z    , DE_U        , DE_I        , DE_O          , DE_P           , DE_DQUO
#define ___________GAME_R2___________ DE_H    , RSFT_T(DE_J), RCTL_T(DE_K), LALT_T(DE_L)  , RGUI_T(DE_ODIA), DE_QUOT
#define ___________GAME_R3___________ DE_N    , DE_M        , DE_COMM     , RALT_T(DE_DOT), DE_MINS        , KC_F13
#define ___________GAME_R4___________ GAME_RT1, GAME_RT2    , GAME_RT3

#define ___________GAME2_L1___________ KC_F6  , KC_F9  , KC_7   , KC_8, KC_9, KC_T
#define ___________GAME2_L2___________ KC_F5  , KC_F8  , KC_4   , KC_5, KC_6, KC_G
#define ___________GAME2_L3___________ KC_F4  , KC_F7  , KC_1   , KC_2, KC_3, KC_B
#define ___________GAME2_L4___________ _______, _______, _______

#define GAME2_RT1 GAME_RT1
#define GAME2_RT2 GAME_RT1
#define GAME2_RT3 GAME_RT1
#define ___________GAME2_R1___________ ___________GAME_R1___________
#define ___________GAME2_R2___________ ___________GAME_R2___________
#define ___________GAME2_R3___________ ___________GAME_R3___________
#define ___________GAME2_R4___________ ___________GAME_R4___________

#define NAV_LT1 XXXXXXX
#define NAV_LT2 XXXXXXX
#define NAV_LT3 XXXXXXX
#define ___________NAV_L1___________ XXXXXXX, XXXXXXX      , TD(U_TD_U_GAME), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), XXXXXXX
#define ___________NAV_L2___________ XXXXXXX, OSM(MOD_LGUI), OSM(MOD_LALT)  , OSM(MOD_LCTL)   , OSM(MOD_LSFT)  , XXXXXXX
#define ___________NAV_L3___________ XXXXXXX, XXXXXXX      , KC_RALT        , XXXXXXX         , XXXXXXX        , XXXXXXX
#define ___________NAV_L4___________ NAV_LT1, NAV_LT2      , NAV_LT3

#define NAV_RT1 KC_ENT
#define NAV_RT2 KC_BSPC
#define NAV_RT3 KC_DEL
#define ___________NAV_R1___________ U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , XXXXXXX
#define ___________NAV_R2___________ CW_TOGG, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX
#define ___________NAV_R3___________ KC_INS , KC_HOME, KC_PGDN, KC_PGUP, KC_END , XXXXXXX
#define ___________NAV_R4___________ NAV_RT1, NAV_RT2, NAV_RT3

#define MOUSE_LT1 XXXXXXX
#define MOUSE_LT2 XXXXXXX
#define MOUSE_LT3 XXXXXXX
#define ___________MOUSE_L1___________ XXXXXXX  , XXXXXXX  , TD(U_TD_U_GAME), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), XXXXXXX
#define ___________MOUSE_L2___________ XXXXXXX  , KC_LGUI  , KC_LALT        , KC_LCTL         , KC_LSFT        , XXXXXXX
#define ___________MOUSE_L3___________ XXXXXXX  , XXXXXXX  , KC_RALT        , XXXXXXX         , XXXXXXX        , XXXXXXX
#define ___________MOUSE_L4___________ MOUSE_LT1, MOUSE_LT2, MOUSE_LT3

#define MOUSE_RT1 KC_BTN2
#define MOUSE_RT2 KC_BTN1
#define MOUSE_RT3 KC_BTN3
#define ___________MOUSE_R1___________ U_RDO    , U_PST    , U_CPY    , U_CUT  , U_UND  , XXXXXXX
#define ___________MOUSE_R2___________ CW_TOGG  , KC_MS_L  , KC_MS_D  , KC_MS_U, KC_MS_R, XXXXXXX
#define ___________MOUSE_R3___________ XXXXXXX  , KC_WH_L  , KC_WH_D  , KC_WH_U, KC_WH_R, XXXXXXX
#define ___________MOUSE_R4___________ MOUSE_RT1, MOUSE_RT2, MOUSE_RT3

#define MEDIA_LT1 XXXXXXX
#define MEDIA_LT2 XXXXXXX
#define MEDIA_LT3 XXXXXXX
#define ___________MEDIA_L1___________ XXXXXXX  , XXXXXXX  , TD(U_TD_U_GAME), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), XXXXXXX
#define ___________MEDIA_L2___________ XXXXXXX  , KC_LGUI  , KC_LALT        , KC_LCTL         , KC_LSFT        , XXXXXXX
#define ___________MEDIA_L3___________ XXXXXXX  , XXXXXXX  , KC_RALT        , XXXXXXX         , XXXXXXX        , XXXXXXX
#define ___________MEDIA_L4___________ MEDIA_LT1, MEDIA_LT2, MEDIA_LT3

#define MEDIA_RT1 KC_MSTP
#define MEDIA_RT2 KC_MPLY
#define MEDIA_RT3 KC_MUTE
#define ___________MEDIA_R1___________ RGB_TOG  , RGB_MOD  , RGB_HUI  , RGB_SAI, RGB_VAI, XXXXXXX
#define ___________MEDIA_R2___________ XXXXXXX  , KC_MPRV  , KC_VOLD  , KC_VOLU, KC_MNXT, XXXXXXX
#define ___________MEDIA_R3___________ XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________MEDIA_R4___________ MEDIA_RT1, MEDIA_RT2, MEDIA_RT3

#define NUM_LT1 DE_DOT
#define NUM_LT2 DE_0
#define NUM_LT3 DE_MINS
#define ___________NUM_L1___________ XXXXXXX, DE_SLSH, DE_7, DE_8, DE_9, DE_ASTR
#define ___________NUM_L2___________ XXXXXXX, DE_SCLN, DE_4, DE_5, DE_6, DE_EQL
#define ___________NUM_L3___________ XXXXXXX, DE_PERC, DE_1, DE_2, DE_3, DE_PLUS
#define ___________NUM_L4___________ NUM_LT1, NUM_LT2, NUM_LT3

#define NUM_RT1 XXXXXXX
#define NUM_RT2 XXXXXXX
#define NUM_RT3 XXXXXXX
#define ___________NUM_R1___________ XXXXXXX, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_GAME), XXXXXXX      , XXXXXXX
#define ___________NUM_R2___________ XXXXXXX, OSM(MOD_LSFT)  , OSM(MOD_RCTL)   , OSM(MOD_LALT)  , OSM(MOD_LGUI), XXXXXXX
#define ___________NUM_R3___________ XXXXXXX, DE_ODIA        , DE_ADIA         , DE_UDIA        , DE_SS        , XXXXXXX
#define ___________NUM_R4___________ NUM_RT1, NUM_RT2        , NUM_RT3

#define SYM_LT1 DE_SCLN
#define SYM_LT2 KC_SPC
#define SYM_LT3 DE_UNDS
#define ___________SYM_L1___________ XXXXXXX, DE_CIRC, DE_RABK, DE_PERC, DE_LABK, DE_QUES
#define ___________SYM_L2___________ XXXXXXX, DE_PLUS, DE_RPRN, DE_EQL , DE_LPRN, DE_HASH
#define ___________SYM_L3___________ XXXXXXX, DE_MINS, DE_ASTR, DE_COLN, DE_PLUS, DE_EXLM
#define ___________SYM_L4___________ SYM_LT1, SYM_LT2, SYM_LT3

#define SYM_RT1 XXXXXXX
#define SYM_RT2 XXXXXXX
#define SYM_RT3 XXXXXXX
#define ___________SYM_R1___________ DE_TILD, DE_LBRC, DE_DLR , DE_RBRC, DE_BSLS, XXXXXXX
#define ___________SYM_R2___________ DE_AT  , DE_LCBR, DE_DQUO, DE_RCBR, DE_PIPE, XXXXXXX
#define ___________SYM_R3___________ DE_QUOT, DE_AMPR, DE_GRV , DE_DOT , DE_SLSH, XXXXXXX
#define ___________SYM_R4___________ SYM_RT1, SYM_RT2, SYM_RT3

#define FUN_LT1 KC_APP
#define FUN_LT2 KC_SPC
#define FUN_LT3 KC_TAB
#define ___________FUN_L1___________ XXXXXXX, KC_F12 , KC_F7  , KC_F8, KC_F9, KC_PSCR
#define ___________FUN_L2___________ XXXXXXX, KC_F11 , KC_F4  , KC_F5, KC_F6, KC_SCRL
#define ___________FUN_L3___________ XXXXXXX, KC_F10 , KC_F1  , KC_F2, KC_F3, KC_PAUS
#define ___________FUN_L4___________ FUN_LT1, FUN_LT2, FUN_LT3

#define FUN_RT1 XXXXXXX
#define FUN_RT2 XXXXXXX
#define FUN_RT3 XXXXXXX
#define ___________FUN_R1___________ XXXXXXX, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_GAME), XXXXXXX, XXXXXXX
#define ___________FUN_R2___________ XXXXXXX, KC_LSFT        , KC_LCTL         , KC_LALT        , KC_LGUI, XXXXXXX
#define ___________FUN_R3___________ XXXXXXX, XXXXXXX        , XXXXXXX         , KC_RALT        , KC_F13 , XXXXXXX
#define ___________FUN_R4___________ FUN_RT1, FUN_RT2        , FUN_RT3

#define BUTTON_LT1 KC_APP
#define BUTTON_LT2 XXXXXXX
#define BUTTON_LT3 XXXXXXX
#define ___________BUTTON_L1___________ XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________BUTTON_L2___________ XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________BUTTON_L3___________ XXXXXXX   , XXXXXXX   , U_CUT     , U_CPY  , U_PST  , XXXXXXX
#define ___________BUTTON_L4___________ BUTTON_LT1, BUTTON_LT2, BUTTON_LT3

#define BUTTON_RT1 XXXXXXX
#define BUTTON_RT2 XXXXXXX
#define BUTTON_RT3 XXXXXXX
#define ___________BUTTON_R1___________ XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________BUTTON_R2___________ XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________BUTTON_R3___________ XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX, XXXXXXX
#define ___________BUTTON_R4___________ BUTTON_RT1, BUTTON_RT2, BUTTON_RT3
