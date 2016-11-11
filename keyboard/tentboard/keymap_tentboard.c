#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: base qwerty layout - when fn0 is pressed then action defined later down will happen (momentarily activate layer 1) */
    KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, HOME, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, PGUP, \
           DEL,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,       PGDN, \
           FN2,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,        END,  \
           LCTL, LGUI,LALT,          FN5,           RALT,FN0 ,RCTL,LEFT,DOWN,RGHT),

    /* 1: fn layer 1 - function keys */
    KEYMAP(GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, PSCR,PAUS,DEL,  INS,  \
           CALC, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, VOLD,VOLU,MUTE, FN6, \
           CAPS, SLCK,NLCK,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,TRNS,APP,       FN7, \
           TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,PGUP,      WHOM, \
           TRNS, TRNS,TRNS,          FN1,           TRNS,TRNS,TRNS,HOME,PGDN,END),

    /* 2: fn layer 2 - multimedia */
    KEYMAP( PWR, SLEP,WAKE,MNXT,MPRV,MSTP,MPLY,MSEL,TRNS,TRNS,TRNS,FN3, FN4, ACL0, HOME, \
           WSCH, TRNS,UP  ,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,ACL1, PGUP, \
           MYCM, LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,ACL2,      PGDN, \
           TRNS, WHOM,WBAK,WFWD,WSTP,WREF,WFAV,BTN1,BTN2,BTN3,BTN4,TRNS,MS_U,      END,  \
           TRNS, TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,MS_L,MS_D,MS_R),

    /* 3: fn layer 3 - SpaceFN */
    KEYMAP( GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, INS,  \
           CALC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,UP,  END, TRNS,PSCR,PAUS,BSPC,TRNS, \
           TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,     TRNS, \
           TRNS, TRNS,TRNS,TRNS,TRNS,SPC, PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
           TRNS, TRNS,TRNS,          TRNS,          TRNS,APP, TRNS,TRNS,TRNS,TRNS),

    /* keycodes: https://github.com/tmk/tmk_core/blob/master/doc/keycode.txt */
		   
    /* do not use the rest at the moment 
    // 1: colemak 
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSLS, \
        BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),
    // 2: dvorak 
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSLS, \
        CAPS,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     ENT,  \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),
    // 3: workman 
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC,BSLS, \
        BSPC,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     ENT,  \
        LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     FN0, RGUI,APP, RCTL),
    */
};

const action_t PROGMEM fn_actions[] = {
    /* TentBoard Layout */
    [0] = ACTION_LAYER_TAP_KEY(1, KC_MUTE),  // to Fn overlay 1
    [1] = ACTION_LAYER_TOGGLE(2),            // toggle mouse/mmedia overlay    
    [2] = ACTION_MODS_ONESHOT(MOD_LSFT),              // lshiftkey: kind of a capslock/shift hybrid allowing to press it and then press a caps
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // fn5key: taskmanager (rctrl + rshft + esc)
    [4] = ACTION_MODS_KEY(MOD_LGUI, KC_PAUS),         // fn6key: systeminfo (win + pause)
    [5] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),          // spacefnkey: holding space enables overlay 3, is particularely fast and easy
    [6] = ACTION_MODS_KEY(MOD_RCTL, KC_PGUP),         // emulate ctrl-pgup with fn-pgup as well
    [7] = ACTION_MODS_KEY(MOD_RCTL, KC_PGDN),         // emulate ctrl-pgdn with fn-pgdn as well	
};

    /* actions: https://github.com/tmk/tmk_keyboard/blob/master/tmk_core/doc/keymap.md
        ACTION_LAYER_MOMENTARY(layer), activate layer when holding down the FN key
        ACTION_LAYER_TOGGLE(layer), activate on first press, deactivate on second press
        ACTION_LAYER_TAP_KEY(layer, key), works like ACTION_LAYER_MOMENTARY when holding but executes the specified key on tap (quick press/release phase)
    */
