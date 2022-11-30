/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include "quantum.h"
#include "rgblight/rgblight.h"
#include "keymap_german.h"

#define LG(x) LGUI_T(x)
#define LA(x) LALT_T(x)
#define LC(x) LCTL_T(x)
#define LS(x) LSFT_T(x)

#define RS(x) RSFT_T(x)
#define RC(x) RCTL_T(x)
#define RA(x) RALT_T(x)
#define RG(x) RGUI_T(x)

// Long-press keys are mapped to a dummy-layer and processed in `process_user_record` below
#define LP_Q LT(0, DE_Q)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , LP_Q     , DE_W     , DE_E     , DE_R     , DE_T     ,                                  DE_Z     , DE_U     , DE_I     , DE_O     , DE_P     , _______  ,
    _______  , LA(DE_A) , LC(DE_S) , LG(DE_D) , LS(DE_F) , DE_G     ,                                  DE_H     , RS(DE_J) , RG(DE_K) , RC(DE_L) , DE_COLN  , _______  ,
    _______  , DE_Y     , DE_X     , DE_C     , DE_V     , DE_B     , OSL(5)   ,             TG(2)   , DE_N     , DE_M     , DE_COMM  , DE_DOT   , DE_MINS  , _______  ,
    _______  , _______  , _______  , _______  , MO(2)    ,LT(1,KC_SPC),LT(4,KC_BSPC),LT(3,KC_TAB),LSFT_T(KC_ENT), XXXXXXX  , XXXXXXX  , XXXXXXX  , DE_SLSH  , _______
  ),

  [1] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , DE_EXLM  , DE_AT    , DE_LCBR  , DE_RCBR  , DE_GRV   ,                                  DE_QUOT  , DE_UDIA  , DE_CIRC  , DE_ODIA  , DE_ASTR  , _______  ,
    _______  , DE_ADIA  , DE_SS    , DE_LPRN  , DE_RPRN  , DE_PLUS  ,                                  DE_DQUO  , DE_EQL   , DE_DLR   , DE_HASH  , DE_SCLN  , _______  ,
    _______  , DE_PIPE  , DE_PERC  , DE_LBRC  , DE_RBRC  , DE_TILD  , _______  ,            _______  , DE_AMPR  , DE_LABK  , DE_RABK  , DE_QUES  , DE_UNDS  , _______  ,
    _______  , _______  , _______  , _______  , XXXXXXX  , _______  , XXXXXXX  ,            DE_SLSH  , KC_RSFT  , XXXXXXX  , XXXXXXX  , XXXXXXX  , DE_BSLS  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , KC_LALT  , KC_LCTL  , KC_LGUI  , KC_LSFT  , _______  ,                                  KC_BTN4  , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_BTN5  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  KC_DEL   , KC_PGUP  , KC_UP    , KC_PGDN  , KC_INS   , _______  ,
    _______  , KC_LALT  , KC_LCTL  , KC_LGUI  , KC_LSFT  , _______  ,                                  KC_HOME  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_END   , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , KC_SPC   , KC_DEL   ,            _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , _______  ,
    _______  , LA(KC_1) , LC(KC_2) , LG(KC_3) , LS(KC_4) , KC_5     ,                                  KC_6     , RS(KC_7) , RG(KC_8) , RC(KC_9) , RA(KC_0) , _______  ,
    _______  , _______  , _______  , _______  , DE_COLN  , DE_DOT   , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  , _______  ,            KC_BSPC  , KC_ENT   , _______  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [5] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , RGB_TOG  ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , _______  ,
    _______  , RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , RGB_M_K  , _______  ,
    _______  , RESET    , _______  , _______  , _______  , _______  , EEP_RST  ,            EEP_RST  , _______  , _______  , _______  , _______  , RESET    , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),
};
// clang-format on

static bool process_tap_or_long_press_key(keyrecord_t* record, uint16_t alt_keycode) {
	if (record->tap.count != 0) {
		return true;
	}

	if (record->event.pressed) {
		tap_code16(alt_keycode);
	}
	return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
	switch (keycode) {
		case LP_Q:
			return process_tap_or_long_press_key(record, KC_ESC);
	}

	return true;
}

const rgblight_segment_t PROGMEM my_layer_caps[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_RED}
);

const rgblight_segment_t PROGMEM my_layer_symbols[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_GOLD}
);

const rgblight_segment_t PROGMEM my_layer_mouse[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM my_layer_move[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_CHARTREUSE}
);

const rgblight_segment_t PROGMEM my_layer_nav[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_CYAN}
);

const rgblight_segment_t PROGMEM my_layer_conf[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer_caps,
    my_layer_symbols,
    my_layer_mouse,
    my_layer_move,
    my_layer_nav,
    my_layer_conf
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    return state;
}

