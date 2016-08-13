#include "keymap_common.h"

/*
 *     KC_NLCK,   KC_PSLS,   KC_PAST,     KC_PMNS,
 */

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {
      KC_DELETE, KC_INSERT, KC_F3,    KC_F4,       \
      KC_NLCK,   KC_FN0,    KC_FN2,   KC_FN1,      \
      KC_KP_7,   KC_KP_8,   KC_KP_9,  KC_KP_MINUS, \
      KC_KP_4,   KC_F5,     KC_KP_6,  KC_KP_PLUS,  \
      KC_KP_1,   KC_KP_2,   KC_KP_3,  KC_NO,       \
      KC_RCTRL,  KC_NO,     KC_F3,    KC_ESC       \
    },
};
const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_MODS_KEY(MOD_RSFT, KC_X),
	[1] = ACTION_MODS_KEY(MOD_RSFT, KC_Y),
	[2] = ACTION_MODS_KEY(MOD_RSFT, KC_Z),
};

