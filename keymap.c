#include QMK_KEYBOARD_H

#define _QWERTY 4
#define _SYMBOLS 1
#define _NUMBERS 2
#define _NAVIGATION 3
#define _COLEMAK 0

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT_split_3x5_3(/**/ KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_BSPC,
                                    /**/ KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O,
                                    /**/ KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,
                                    /**/ OSM(MOD_RCTL), MEH_T(KC_SPACE), OSM(MOD_RSFT), OSM(MOD_RGUI), OSL(1), OSM(MOD_RALT)),

    [_QWERTY] = LAYOUT_split_3x5_3(/**/ KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_BSPC,
                                   /**/ KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_P,
                                   /**/ KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                                   /**/ OSM(MOD_RCTL), MEH_T(KC_SPACE), OSM(MOD_RSFT), OSM(MOD_RGUI), TO(0), OSM(MOD_RALT)),

    [_SYMBOLS] = LAYOUT_split_3x5_3(/**/ KC_ESC, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_PLUS,
                                    /**/ KC_TAB, KC_DQUO, KC_LPRN, KC_RPRN, KC_UNDS, KC_BSLS, KC_LCBR, KC_RCBR, KC_PIPE, KC_ENT,
                                    /**/ KC_TILD, KC_QUOT, KC_EQL, KC_COLN, KC_GRV, KC_NO, KC_LBRC, KC_RBRC, KC_NO, TO(3),
                                    /**/ KC_EXLM, KC_SCLN, KC_NO, KC_NO, TO(2), KC_RALT),

    [_NUMBERS] = LAYOUT_split_3x5_3(KC_ESC, KC_MPLY, KC_MRWD, KC_MFFD, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_BSPC,
                                    /**/ KC_TAB, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_ENT,
                                    /**/ TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO,
                                    /**/ TO(0), KC_NO, KC_NO, KC_RGUI, KC_NO, KC_NO),

    [_NAVIGATION] = LAYOUT_split_3x5_3(/**/ KC_ESC, KC_PGDN, KC_MS_U, KC_PGUP, KC_NO, /**/ KC_NO, RCTL(RSFT(KC_TAB)), KC_UP, RCTL(KC_TAB), KC_NO,
                                       /**/ KC_TAB, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, /**/ KC_BTN1, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,
                                       /**/ KC_NO, KC_BTN2, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                       /**/ TO(0), KC_NO, KC_RSFT, /**/ KC_RGUI, KC_NO, KC_RALT)

};

#define CLR_PURPLE \
    { 197, 183, 238 }

#define CLR_PINK \
    { 0, 183, 238 }

#define CLR_RED \
    { 0, 245, 245 }

#define CLR_YELLOW \
    { 42, 255, 255 }

#define CLR_GREEN \
    { 87, 245, 204 }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [_SYMBOLS] = {
        /**/ CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE,
        /**/ CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE,
        /**/ CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE, CLR_PURPLE,
        /**/ CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PINK,   CLR_PINK,
        /**/ CLR_PINK,   CLR_PURPLE, CLR_PINK,   CLR_PURPLE, CLR_PINK,   CLR_PURPLE, CLR_PINK,   CLR_PURPLE, CLR_PINK,   CLR_PURPLE, CLR_PINK, CLR_PURPLE,
    },

    [_NUMBERS] = {
        /**/ CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN,
        /**/ CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN,
        /**/ CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN,
        /**/ CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN,
        /**/ CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN, CLR_GREEN,
    },

    [_NAVIGATION] = {
        /**/ CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED,
        /**/ CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED,
        /**/ CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED,
        /**/ CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED,
        /**/ CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED, CLR_RED,
    },
};

// This makes it so we can have the key colors for each layer layed out like
// the keymaps are layed out, with the underglow LEDs at the end. This allows
// us to map back to the actualy index in the rgb matrix. This was created by
// looking at the rgb matrix config definition in the info.json of the mini36
const int rgb_matrix_backmap[RGB_MATRIX_LED_COUNT] = {
    /**/ 23, 18, 17, 10, 9,  33, 34, 41, 42, 47,
    /**/ 22, 19, 16, 11, 8,  32, 35, 40, 43, 46,
    /**/ 21, 20, 15, 12, 7,  31, 36, 39, 44, 45,
    /**/ 14, 13, 6,  30, 37, 38,
    /**/ 0,  1,  2,  3,  4,  5,  24, 25, 26, 27, 28, 29,
};

// NOTE: a lot of this color management code was taken from the keymap.c generated
//       from my moonlander layout, I had to modify it a bit to work with the base
//       QMK repo

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(rgb_matrix_backmap[i], f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    int active_layer = biton32(layer_state);
    switch (active_layer) {
        // NOTE: I am intentionally not setting anything for layer 0, I
        //       want that to have the standard animations
        case _SYMBOLS:
        case _NUMBERS:
        case _NAVIGATION:
            set_layer_color(active_layer);
            return true;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
                rgb_matrix_set_color_all(0, 0, 0);
                return true;
            }
            break;
    }
    return false;
}

bool dm_render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _COLEMAK:
            oled_write_P(PSTR("COLEMAK\n"), false);
            break;
        case _SYMBOLS:
            oled_write_P(PSTR("SYMBOLS\n"), false);
            break;
        case _NUMBERS:
            oled_write_P(PSTR("NUMBERS\n"), false);
            break;
        case _NAVIGATION:
            oled_write_P(PSTR("NAVIGATION\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    return false;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        dm_render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    }
    return false;
}
