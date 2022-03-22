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
#include "keymap_german.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , DE_1     , DE_2     , DE_3     , DE_4     , DE_5     ,                                  DE_6     , DE_7     , DE_8     , DE_9     , DE_0     , DE_MINS  ,
    KC_LGUI  , DE_Q     , DE_W     , DE_E     , DE_R     , DE_T     ,                                  DE_Z     , DE_U     , DE_I     , DE_O     , DE_P     , KC_RGUI  ,
    KC_LSFT  , DE_A     , DE_S     , DE_D     , DE_F     , DE_G     ,                                  DE_H     , DE_J     , DE_K     , DE_L     , DE_COLN  , KC_RSFT  ,
    OSL(1)   , DE_Y     , DE_X     , DE_C     , DE_V     , DE_B     , OSL(4)   ,             _______ , DE_N     , DE_M     , DE_COMM  , DE_DOT   , DE_MINS  , OSL(1)   ,
    KC_LCTL  , KC_LALT  , _______  , _______  , MO(2)    , KC_SPC   , KC_BSPC  ,        LT(3,KC_TAB) , KC_ENT   , XXXXXXX  , XXXXXXX  , XXXXXXX  , DE_SLSH  , KC_RCTL
  ),

  [1] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , DE_EXLM  , DE_AT    , DE_LCBR  , DE_RCBR  , DE_PIPE  ,                                  DE_QUOT  , _______  , _______  , _______  , DE_ASTR  , KC_F12   ,
    KC_CAPS  , DE_HASH  , DE_DLR   , DE_LPRN  , DE_RPRN  , DE_GRV   ,                                  DE_DQUO  , _______  , _______  , _______  , DE_SCLN  , KC_CAPS  ,
    _______  , DE_PERC  , DE_PLUS  , DE_LBRC  , DE_RBRC  , DE_TILD  , _______  ,            _______  , DE_AMPR  , DE_LABK  , DE_RABK  , _______  , DE_UNDS  , _______  ,
    _______  , _______  , DE_CIRC  , _______  , _______  , _______  , KC_DEL   ,            KC_INS   , DE_EQL   , XXXXXXX  , XXXXXXX  , XXXXXXX  , DE_BSLS  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , KC_BTN1  , KC_BTN3  , KC_BTN2  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , KC_7     , KC_8     , KC_9     , _______  ,                                  _______  , KC_PGUP  , KC_UP    , KC_PGDN  , _______  , _______  ,
    _______  , _______  , KC_4     , KC_5     , KC_6     , _______  ,                                  KC_HOME  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_END   , _______  ,
    _______  , _______  , KC_1     , KC_2     , KC_3     , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , KC_0     , KC_DOT   , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [4] = LAYOUT_universal(
    RGB_TOG  , _______  , _______  , _______  , _______  , _______  ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , _______  ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , _______  ,                                  CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    _______  , _______  , SCRL_DVD , SCRL_DVI , SCRL_MO  , SCRL_TO  , EEP_RST  ,            EEP_RST  , _______  , _______  , _______  , _______  , _______  , _______  ,
    RESET    , _______  , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , _______  ,            _______  , KC_BSPC  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , RESET
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
}
#endif
