#include QMK_KEYBOARD_H
#include "bozho.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_bozho( // Default layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
   //│Q or Mouse│  W       │  E       │  R       │  T       │   │  Y       │  U       │  I       │  O       │  P       │
___BASE1___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
  // │ A or ALT │S or GUI  │S or CTL  │F or Shift│  G       │   │  H       │J or Shift│K or CTL  │L or GUI  │; and ;   │
___BASE2___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
  // │  Z       │  X       │  C       │  V       │  B       │   │  N       │  M       │ , <      │ . >      │ / and ?  │
___BASE3___,
 //  ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
                            KC_DEL,LT(_LOWER, KC_ESC),KC_BSPC,  KC_SPC,LT(_UPPER, KC_ENT),KC_TAB
//                         │DEL       │ESC or L1 │Backspace │   │Space     │ENT or L2 │Tab       │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯
  ),

  [_LOWER] = LAYOUT_bozho( // Left (or lower) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │1 and !   │2 and @   │3 and #   │4 and $   │5 and %   │   │6 and ^   │7 and &   │8 and *   │9 and (   │0 and )   │
___LOWER1___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │NO   or AT│NO or GUI │NO or CTL │NO or SHFT│  NO      │   │<-        │V or Shift│^ or CTL  │-> or GUI │ NO or AL │
___LOWER2___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │ NO       │   NO     │  NO      │  NO      │   │HOME      │PG_DOWN   │PG_UP     │ END      │ \ and │  │
___LOWER3___,
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
                            KC_NO,     KC_NO,     KC_NO,         KC_SPC,LT(_ADJUST, KC_ENT),KC_TAB
//                         │  NO      │  NO      │  NO      │   │Space     │ENT or TRI│  TAB     │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯
  ),

  [_UPPER] = LAYOUT_bozho( // Right (or upper) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │  F1      │  F2      │  F3      │  F4      │  F5      │   │  F6      │  F7      │  F8      │  F9      │  F10     │
___UPPER1___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ F11 or AT│F12 or GUI│ NO or CTL│NO or SHFT│  NO      │   │ - or _   │= and +SFT│[ and { CT│] and }GUI│' and ",AL│
___UPPER2___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ ` and ~  │ NO       │ NO       │  NO      │  NO      │   │NO        │NO        │NO        │ NO       │ NO       │
___UPPER3___,
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
                            KC_DEL,LT(_ADJUST,KC_ESC),KC_BSPC,        KC_NO,   KC_NO,  KC_NO
//                         │DEL       │ESC or TRI│Backspace │   │  NO      │  NO      │  NO      │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯
  ),

  [_ADJUST] = LAYOUT_bozho( // both (or adjust) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │  Mute    │Vol Down  │Vol Up    │BrightDown│BrightUp  │   │Print Scr │ NO       │  NO      │   NO     │  NO      │
___ADJUST1___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │Play/Pause│Prev Song │Next Song │   NO     │  NO      │   │  NO      │Prev RGB  │Toggle RGB│Next RGB  │   NO     │
___ADJUST2___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
___ADJUST3___,
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
                            KC_NO,      KC_NO ,   KC_NO,          KC_NO,    KC_NO,     KC_NO
//                         │  NO      │  NO      │NO        │   │ NO       │ NO       │  NO      │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

  ),
[_MOUSE] = LAYOUT_bozho( // both (or adjust) layer
  // ╭──────────┬──────────┬──────────┬──────────┬──────────╮   ╭──────────┬──────────┬──────────┬──────────┬──────────╮
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
___MOUSE1___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
___MOUSE2___,
  // ├──────────┼──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┼──────────┤
//   │ NO       │  NO      │ NO       │  NO      │  NO      │   │  NO      │  NO      │   NO     │   NO     │ NO       │
___MOUSE3___,
  // ╰──────────┴──────────┼──────────┼──────────┼──────────┤   ├──────────┼──────────┼──────────┼──────────┴──────────╯
                            KC_BTN3,    KC_BTN2 ,   KC_BTN1,       KC_BTN1,  KC_BTN2,     KC_BTN3
//                         │Button 3  │Button 2  │Button 1  │   │Button 1  │Button 2  │Button 3  │
  //                       ╰──────────┴──────────┴──────────╯   ╰──────────┴──────────┴──────────╯

  ),
}
;
// Combos
// T + Y = :
// G + H = ' or ", tap dance
// R + U = \ or |, tap dance
// F + J = CAPS
// V + M = -
// B + N = _
// E + I = ( or ), tap dance
// D + K = { or }, tap dance
// C + , = [ or ], tap dance
// W + O = +
// S + L = =
