#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_BRID, KC_BRIU, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LSPO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSPC, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, TG(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, LALT_T(KC_CAPS), KC_LGUI, MO(1), LT(1,KC_ENT), KC_SPC, RALT_T(KC_BSPC)),
	[1] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, LCAG_T(KC_NO), KC_BSPC, KC_UP, KC_DEL, KC_LCBR, KC_RCBR, KC_7, KC_8, KC_9, KC_P0, KC_F12, KC_TRNS, LCA_T(KC_NO), KC_LEFT, KC_DOWN, KC_RGHT, KC_LPRN, KC_RPRN, KC_4, KC_5, KC_6, KC_EQL, KC_PSLS, KC_TRNS, LCA(KC_F), SGUI_T(KC_NO), LALT(KC_LGUI), KC_QUOT, KC_LBRC, KC_TRNS, KC_TRNS, KC_RBRC, KC_1, KC_2, KC_3, KC_MINS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(TO(0), KC_NO, KC_WH_L, KC_WH_R, KC_WH_U, KC_WH_D, RGB_M_R, RGB_M_P, RGB_M_G, RGB_M_B, KC_BRID, KC_BRIU, RGB_TOG, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_ACL0, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_SW, KC_VOLD, KC_VOLU, RGB_MOD, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, RGB_SPI, RGB_SPD, RGB_SAI, RGB_SAD, KC_MSTP, KC_MPLY, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL2, KC_TRNS, KC_TRNS, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, KC_MRWD, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//       if (record->event.pressed) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       return false;
//       break;
//   }
//   return true;
// }

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_DOWN);
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
            tap_code(KC_UP);
        }
    }
}
