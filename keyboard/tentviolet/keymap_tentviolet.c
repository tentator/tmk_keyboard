#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: base qwerty layout - when fn0 is pressed then action defined later down will happen (momentarily activate layer 1) */
    KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,BSPC, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,BSLS, \
           DEL,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RBRC,FN0, \
           LCTL, LGUI,LALT,          SPC,           RALT,FN2 ,FN1, EQL, FN3),

    /* 1: fn layer 1 - function keys */
    KEYMAP(GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, PSCR,INS,  \
           CALC, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, VOLD,HOME, \
           CAPS, LEFT,DOWN,RGHT,UP  ,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,VOLU,PGUP, \
           TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,PGDN, \
           TRNS, TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,DEL, END),

    /* 2: fn layer 2 - multimedia */
    KEYMAP( PWR, SLEP,WAKE,MNXT,MPRV,MSTP,MPLY,MSEL,TRNS,TRNS,TRNS,TRNS,TRNS, \
           CALC, TRNS,UP  ,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS, \
           MYCM, LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,ACL0, \
           WSCH, WHOM,WBAK,WFWD,WSTP,WREF,WFAV,BTN1,BTN2,BTN3,BTN4,TRNS,MS_U, \
           TRNS, TRNS,TRNS,          TRNS,          TRNS,MS_L,MS_D,TRNS,TRNS),

};
const uint16_t PROGMEM fn_actions[] = {
    /* VioletTentBoard Layout, hide cursor keys down there between the metas */
	[0] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_UP),    // rshiftkey: momentary right shift if hold, up if tapped
    [1] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DOWN),  // rctrlkey: momentary rctrl if hold, down if tapped
    [2] = ACTION_LAYER_TAP_KEY(1, KC_LEFT),        // fnkey: momentary overlay 1 if hold, left if tapped
    [3] = ACTION_LAYER_TAP_KEY(2, KC_RIGHT),       // bluekey: momentary mouse/mmedia overlay 2 if hold, right if tapped
	
   /* [0] = ACTION_LAYER_TAP_KEY(1, KC_FN1),  // FN0: to overlay 1 when hold pressed or toggle to overlay 2 when tap!
      [1] = ACTION_LAYER_TOGGLE(2),           // FN1: toggle mouse/mmedia overlay 2
    */
};

/* other possibilities:
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
  ACTION_LAYER_MOMENTARY(layer), activate layer when holding down the FN key
  ACTION_LAYER_TOGGLE(layer), activate on first press, deactivate on second press
  ACTION_LAYER_TAP_KEY(layer, key), works like ACTION_LAYER_MOMENTARY when holding but executes the specified key on tap (quick press/release phase)
*/
