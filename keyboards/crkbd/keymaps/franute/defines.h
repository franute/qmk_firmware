extern keymap_config_t keymap_config;

// Shortcuts
#define S_NUHS  S(KC_NUHS)
#define S_NUBS  S(KC_NUBS)
#define S_INS   S(KC_INS)
#define LCBRC   S(KC_LBRC)
#define RCBRC   S(KC_RBRC)
#define TG_GAME TG(_GAME)
#define TG_NUMP TG(_NUMPAD)
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define ADJUST  MO(_ADJUST)
#define NUMPAD  MO(_NUMPAD)
#define FNLAYER MO(_FUNCTION)

// Layer taps
#define RAI_BCK LT(_RAISE, KC_BSPC)
#define RAI_ENT LT(_RAISE, KC_ENT)
#define RAI_SPC LT(_RAISE, KC_SPC)
#define LOW_ENT LT(_LOWER, KC_ENT)
#define LOW_SPC LT(_LOWER, KC_SPC)
#define LOW_GUI LT(_LOWER, )

// Mod-Taps
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
#define LST(X) LSFT_T(X)
#define RST(X) RSFT_T(X)
#define LCT(X) LCTL_T(X)
#define RCT(X) RCTL_T(X)
#define LGT(X) LGUI_T(X)
#define RGT(X) RGUI_T(X)
#define TAT(X) LALT_T(X)
#define AGT(X) RALT_T(X)

// Modifiers
#define LC_TAB   MT(MOD_LCTL, KC_TAB)
#define LC_CAPS  MT(MOD_LCTL, KC_CAPS)
#define LS_CAPS  MT(MOD_LSFT, KC_CAPS)
#define RS_CAPS  MT(MOD_RSFT, KC_CAPS)
#define RS_ESC   MT(MOD_RSFT, KC_ESC)
#define RA_BSPC  MT(MOD_RALT, KC_BSPC)
#define RC_BSPC  MT(MOD_RCTL, KC_BSPC)
#define LW_ENT   MT(MOD_LGUI, KC_ENT)