#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    // Capa 0: Normal
    [_BASE] = LAYOUT_ortho_4x12(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    	KC_T,    	KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    	KC_G,    	KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    	KC_B,    	KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_GRV,
        KC_NO,   KC_ESC,  KC_LGUI, KC_LALT, MO(_LOWER), KC_SPC,  	KC_ENT,  MO(_RAISE), KC_RALT, KC_RSFT, KC_DEL,  KC_NO
    ),

    // Capa 1: Lower
    [_LOWER] = LAYOUT_ortho_4x12(
        KC_UNDS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    		KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, 		KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        KC_TRNS, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, 		KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_BSLS, KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    ),

    // Capa 2: Raise
    [_RAISE] = LAYOUT_ortho_4x12(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          	KC_HOME, KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_TRNS,
        KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,        	KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,
        KC_TRNS, KC_F11,  KC_F12,  KC_NO,   KC_NO,   QK_BOOT,        	KC_CAPS, KC_PSCR, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, 
    [_RAISE] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }  
};
#endif