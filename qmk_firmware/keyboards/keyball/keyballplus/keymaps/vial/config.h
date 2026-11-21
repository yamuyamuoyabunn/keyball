#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_ON false
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#endif

#define TAP_CODE_DELAY 5

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 1

// Vial keyboard identity. Keep this unique for Keyball Plus.
#define VIAL_KEYBOARD_UID {0x4B, 0x42, 0x50, 0x4C, 0x55, 0x53, 0x32, 0x36}

// Unlock Vial by pressing the outer two keys of the bottom row.
#define VIAL_UNLOCK_COMBO_ROWS {0, 4}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}
