#include "ayonix.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    }
    return rotation;
}

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state | default_layer_state)) {
        case BASE:
            oled_write_P(PSTR("recurva"), false);
            break;
        case EXTRA:
            oled_write_P(PSTR("qwertz"), false);
            break;
        case GAME:
            oled_write_P(PSTR("Game"), false);
            break;
        case GAME2:
            oled_write_P(PSTR("Game2"), false);
            break;
        case BUTTON:
            oled_write_P(PSTR("Button"), false);
            break;
        case MEDIA:
            oled_write_P(PSTR("Media"), false);
            break;
        case NAV:
            oled_write_P(PSTR("Navigation"), false);
            break;
        case MOUSE:
            oled_write_P(PSTR("Mouse"), false);
            break;
        case SYM:
            oled_write_P(PSTR("Symbol"), false);
            break;
        case NUM:
            oled_write_P(PSTR("Number"), false);
            break;
        case FUN:
            oled_write_P(PSTR("Function"), false);
            break;
    }

    oled_write_P(PSTR("\n"), false);
}

void oled_render_led_state(void) {
    led_t led_state = host_keyboard_led_state();

    oled_write_P(led_state.caps_lock ? PSTR("CAPS ") : PSTR("      "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCROLL ") : PSTR("       "), false);
    oled_write_P(PSTR("\n"), false);
}

void oled_render_mod_state(void) {
    uint8_t mod_state = get_mods();

    oled_write_P(PSTR("SHIFT "), mod_state & MOD_MASK_SHIFT);
    oled_write_P(PSTR("CTRL "), mod_state & MOD_MASK_CTRL);
    oled_write_P(PSTR("ALT "), mod_state & MOD_MASK_ALT);
    oled_write_P(PSTR("GUI"), mod_state & MOD_MASK_GUI);
    oled_write_P(PSTR("\n"), false);
}

void oled_render_logo(void) {
    // static const char PROGMEM crkbd_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
    // oled_write_P(crkbd_logo, false);
    static const char PROGMEM raw_logo[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0, 0, 0, 0,  0,  0,  0,  0, 0,  0,   0,  0,  0,  0,  0,  0,   0,   0,  0, 0, 0,   0, 0, 0, 0, 0, 0, 0,   0,  0,  0, 0,   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 0,   0,  0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 96, 56, 14, 9, 8, 7, 24, 48, 32, 96, 0, 56, 102, 67, 65, 65, 97, 51, 127, 127, 64, 0, 1, 127, 2, 2, 2, 2, 0, 0, 127, 64, 64, 0, 124, 67, 65, 65, 65, 99, 54, 63, 96, 64, 64, 0, 127, 14, 2, 3, 1, 3, 6, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 16, 48, 32, 35, 32, 32, 32, 32, 32, 32, 35, 32, 48, 16, 28, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_mod_state();
        oled_render_led_state();
    } else {
        oled_render_logo();
    }
    return false;
}

#endif // OLED_ENABLE
