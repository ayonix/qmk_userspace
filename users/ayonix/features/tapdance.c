#include QMK_KEYBOARD_H

#include "../definitions/keycodes.h"

void u_td_fn_U_BASE(tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        default_layer_set(1 << BASE);
    }
}

void u_td_fn_U_GAME(tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        default_layer_set(1 << GAME);
    }
}

void u_td_fn_U_EXTRA(tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        default_layer_set(1 << EXTRA);
    }
}

// clang-format off
tap_dance_action_t tap_dance_actions[] = {
    [U_TD_U_BASE] = ACTION_TAP_DANCE_FN(u_td_fn_U_BASE),
    [U_TD_U_EXTRA] = ACTION_TAP_DANCE_FN(u_td_fn_U_EXTRA),
    [U_TD_U_GAME] = ACTION_TAP_DANCE_FN(u_td_fn_U_GAME)
};
// clang-format on
