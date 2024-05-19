// default (200) but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

#undef HOLD_ON_OTHER_KEY_PRESS
#define PERMISSIVE_HOLD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

#define COMBO_VARIABLE_LEN
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_TERM 20
#define COMBO_STRICT_TIMER

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64
