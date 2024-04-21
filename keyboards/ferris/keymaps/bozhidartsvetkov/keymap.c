#include QMK_KEYBOARD_H

enum layers {
  _BASE,
  _LOWER,
  _UPPER,
  _ADJUST
};

#define HRML(k1,k2,k3,k4) LALT_T(k1),LGUI_T(k2),LCTL_T(k3),LSFT_T(k4)
#define HRMR(k1,k2,k3,k4) RSFT_T(k1),RCTL_T(k2),RGUI_T(k3),RALT_T(k4)

#define ___BASE1___ KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P
#define ___BASE2___ HRML(KC_A, KC_S, KC_D, KC_F), KC_G, KC_H, HRMR(KC_J, KC_K, KC_L, KC_SCLN)
#define ___BASE3___ KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH

#define ___LOWER1___ KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0
#define ___LOWER2___ HRML(KC_NO, KC_NO, KC_NO, KC_NO), KC_NO, KC_LEFT, HRMR(KC_DOWN, KC_UP, KC_RGHT, KC_NO)
#define ___LOWER3___ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSLS

#define ___UPPER1___ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
#define ___UPPER2___ HRML(KC_CAPS, KC_F11, KC_F12, KC_NO), KC_NO, KC_NO, HRMR(KC_NO, KC_NO, KC_NO, KC_QUOT)
#define ___UPPER3___ KC_GRV, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL

#define ___ADJUST1___ KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_BTN1, KC_WH_U, KC_BTN2, KC_NO, KC_NO
#define ___ADJUST2___ KC_MPLY, KC_MPRV, KC_MNXT, KC_BTN1, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO
#define ___ADJUST3___ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO

#define LAYOUT_bozho(...)     LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_bozho( // Default layer
//╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//│  Q       │  W       │  E       │  R       │  T       │   │  Y       │  U       │  I       │  O       │  P       │
___BASE1___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│ A or ALT │S or GUI  │S or CTL  │F or Shift│  G       │   │  H       │J or Shift│K or CTL  │L or GUI  │; and ; or ALT │
___BASE2___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│  Z       │  X       │  C       │  V       │  B       │   │  N       │  M       │ , <      │ . >      │ / and ?  │
___BASE3___,
//╰──────────┴──────────┴──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┴──────────┴──────────╯

                            LT(_LOWER, KC_ESC),  KC_BSPC,       KC_SPC,LT(_UPPER,KC_ENT)
//                                 │ESC or L1 │ Backspace│   │ Space    │ENT or L2 │
//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯
            ),
    [_LOWER] = LAYOUT_bozho(  // Left (or "lower") layer
//╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//│1 and !   │2 and @   │3 and #   │4 and $   │5 and %   │   │6 and ^   │7 and &   │8 and *   │9 and (   │0 and )   │
___LOWER1___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│NO   or AT│NO or GUI │NO or CTL │NO or SHFT│  NO      │   │<-        │V or Shift│^ or CTL  │-> or GUI │ NO or AL │
___LOWER2___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│ NO       │ NO       │   NO     │  NO      │  NO      │   │HOME      │PG_DOWN   │PG_UP     │ END      │ \ and │  │
___LOWER3___,
//╰──────────┴──────────┴──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┴──────────┴──────────╯
                                     KC_NO,     KC_NO,         KC_DEL, LT(_ADJUST, KC_TAB)
//                                 │ NO       │  NO      │   │ DEL      │TAB or TRI│
//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯
            ),
    [_UPPER] = LAYOUT_bozho(  // Right (or "upper") layer
//╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//│  F1      │  F2      │  F3      │  F4      │  F5      │   │  F6      │  F7      │  F8      │  F9      │  F10     │
___UPPER1___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│Caps or AT│F11 or GUI│F12 or CTL│NO or SHFT│  NO      │   │   NO     │NO or SHFT│NO or CTL │NO or GUI │' and " or ALT│
___UPPER2___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│ ` and ~  │ [ and {  │ ] and }  │  NO      │  NO      │   │NO        │NO        │NO        │ - and _  │ = and +  │
___UPPER3___,
//╰──────────┴──────────┴──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┴──────────┴──────────╯
                              LT(_ADJUST,KC_NO),  KC_NO,       KC_NO,      KC_NO
//                                 │ Tri      │  NO      │   │ NO       │  NO      │
//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯
            ),
    [_ADJUST] = LAYOUT_bozho(  // Tri (or "adjust") layer
//╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//│  Mute    │Vol Down  │Vol Up    │BrightDown│BrightUp  │   │  Mouse 1 │Wheel up  │Mouse2    │  No      │  NO      │
___ADJUST1___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│Play/Pause│Prev Song │Next Song │Mouse 1`  │Mouse 2   │   │Mouse <-  │Mouse V   │Mouse ^   │Mouse ->  │   NO     │
___ADJUST2___,
//├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//│ NO       │  NO      │ NO       │  NO      │  NO      │   │Wheel left│Wheel Down│Wheel Rght│  NO      │ NO       │
___ADJUST3___,
//╰──────────┴──────────┴──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┴──────────┴──────────╯
                                     KC_NO,     KC_NO,         KC_NO,      KC_NO
//                                 │ NO       │  NO      │   │ NO       │  NO      │
//                                 ╰──────────┴──────────╯   ╰──────────┴──────────╯
            )
};

