#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //  [         ]         =         <-
    { KC_F1,    KC_F2,    KC_F3,    KC_F4,    \
      KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,  \
      KC_P7,    KC_P8,    KC_P9,    KC_PPLS,  \
      KC_P4,    KC_P5,    KC_P6,    KC_PEQL,  \
      KC_P1,    KC_P2,    KC_P3,    KC_NO,    \
      KC_P0,    KC_NO,    KC_PDOT,  KC_PENT },
};
const uint16_t PROGMEM fn_actions[] = {};
