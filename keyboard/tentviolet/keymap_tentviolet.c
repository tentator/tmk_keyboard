#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: base layer 0 - qwerty layout
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspc|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|   \ |
     * |-----------------------------------------------------------|
     * |Delete|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift/Cp|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift/^  |
     * |-----------------------------------------------------------|
     * |Ctrl|Meta|Alt  |L2/Space              |Alt |L1/<|C/dn|L2/> |
     * `-----------------------------------------------------------'
     */
    KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,BSPC, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,BSLS, \
           DEL,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
           FN4,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RBRC,FN0,  \
           LCTL, LGUI,LALT,          FN7,           RALT,FN2 ,FN1, EQL, FN3),

    /* 1: fn layer 1 - function keys
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|Pscr|Paus|Ins  |
     * |-----------------------------------------------------------|
     * |Calc |F11|F12|F13|F14|F15|F16|F17|F18|F19|F20|Vo+|Vo-|Home |
     * |-----------------------------------------------------------|
     * |CapsLk|Lef|Dow|Rgt|Up |  G|  H|  J|  K| Up|  ;|  '| PgUp   |
     * |-----------------------------------------------------------|
     * |Shift/Cp|  Z|  X|  C|  V|  B|  N|  M|Lef|Dow|Rgt|   PgDn   |
     * |-----------------------------------------------------------|
     * |Ctrl|Meta|Alt  |Space                 |Alt | *  |Ctrl| End |
     * `-----------------------------------------------------------'
     */
    KEYMAP(GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, PSCR,INS,  \
           CALC, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, VOLD,HOME, \
           CAPS, LEFT,DOWN,RGHT,UP  ,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,TRNS,PGUP, \
           LSFT, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT,VOLU,PGDN, \
           LCTL, LGUI,LALT,          SPC,           RALT,TRNS,RCTL,PAUS,END),

    /* 2: fn layer 2 - multimedia 
	 * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspc|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|   \ |
     * |-----------------------------------------------------------|
     * |Delete|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift/Cp|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift/^  |
     * |-----------------------------------------------------------|
     * |Ctrl|Meta|Alt  |L2/Space              |Alt |L1/<|C/dn|L2/> |
     * `-----------------------------------------------------------'
     */
    KEYMAP( PWR, SLEP,WAKE,MNXT,MPRV,MSTP,MPLY,MSEL,TRNS,TRNS,TRNS,FN5, TRNS, \
           CALC, TRNS,UP  ,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS, \
           MYCM, LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,ACL0, \
           WSCH, WHOM,WBAK,WFWD,WSTP,WREF,WFAV,BTN1,BTN2,BTN3,BTN4,TRNS,MS_U, \
           TRNS, TRNS,TRNS,          TRNS,          TRNS,MS_L,MS_D,FN6, TRNS),

	/* 3: fn layer 3 - SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Insert |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Hom|Up |End|   |Psc|Pau|BkSpc|
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |           *            |    |App |    |    |
     * `-----------------------------------------------------------'
     */		   
	KEYMAP( GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, INS,  \
		   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,UP,  END, TRNS,PSCR,BSPC, \
		   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS, \
		   TRNS,TRNS,TRNS,TRNS,TRNS,SPC, PGDN,TRNS,TRNS,TRNS,TRNS,PAUS,TRNS, \
		   TRNS,TRNS,TRNS,          TRNS,          TRNS,APP, TRNS,F12 ,TRNS),

	/* keycodes: https://github.com/tmk/tmk_core/blob/master/doc/keycode.txt */
};
const uint16_t PROGMEM fn_actions[] = {
    /* VioletTentBoard Layout: cursor keys are down there, hidden between the metas! */
	[0] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_UP),       // rshiftkey: momentary right shift if hold, up if tapped
    [1] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DOWN),     // rctrlkey: momentary rctrl if hold, down if tapped
    [2] = ACTION_LAYER_TAP_KEY(1, KC_LEFT),           // fnkey: momentary function overlay 1 if hold, left if tapped
    [3] = ACTION_LAYER_TAP_KEY(2, KC_RIGHT),          // bluekey: momentary mouse/mmedia overlay 2 if hold, right if tapped
	[4] = ACTION_MODS_ONESHOT(MOD_LSFT),              // lshiftkey: kind of a capslock/shift hybrid allowing to press it and then press a caps
	[5] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // fn5key: taskmanager (rctrl + rshft + esc)
	[6] = ACTION_MODS_KEY(MOD_LGUI, KC_PAUS),         // fn6key: systeminfo (win + pause)
	[7] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),          // spacefnkey: holding space enables overlay 3, is particularely fast and easy

	/* actions: https://github.com/tmk/tmk_keyboard/blob/master/tmk_core/doc/keymap.md
		ACTION_LAYER_MOMENTARY(layer), activate layer when holding down the FN key
		ACTION_LAYER_TOGGLE(layer), activate on first press, deactivate on second press
		ACTION_LAYER_TAP_KEY(layer, key), works like ACTION_LAYER_MOMENTARY when holding but executes the specified key on tap (quick press/release phase)
	*/
};
