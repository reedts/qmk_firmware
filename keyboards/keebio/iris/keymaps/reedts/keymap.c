#include QMK_KEYBOARD_H

enum custom_keycodes {
  _QWERTZ,
  _ARROW,
  _SPECIAL,
  _ADJUST,
};

#define FNARROW MO(_ARROW)
#define FNSPCL TT(_SPECIAL)
#define FNADJ MO(_ADJUST)

// brackets L (left) and R (right)
// BCK_R = Bracket round
#define BCK_R_L LSFT(KC_8)
#define BCK_R_R LSFT(KC_9)

// BCK_C = Bracket curly
#define BCK_C_L RALT(KC_7)
#define BCK_C_R RALT(KC_0)

// BCK_S = Bracket square
#define BCK_S_L RALT(KC_8)
#define BCK_S_R RALT(KC_9)

// BCK_A = Bracket angled
#define BCK_A_L KC_NUBS
#define BCK_A_R LSFT(KC_NUBS)

#define MY_PIPE RALT(KC_NUBS)
#define MY_BCKSL RALT(KC_MINS)
#define MY_TILDE RALT(KC_RBRC)
#define MY_ASTR LSFT(KC_RBRC)
#define MY_SLSH LSFT(KC_7)
#define MY_EQUL LSFT(KC_0)
#define MY_QUES LSFT(KC_MINS)
#define MY_EXCL LSFT(KC_1)
#define MY_HASH KC_BSLS
#define MY_DLR LSFT(KC_4)
#define MY_PERC LSFT(KC_5)
#define MY_AMPR LSFT(KC_6)
// Single quote
#define MY_S_QUO LSFT(KC_BSLS)
#define MY_D_QUO LSFT(KC_2)

#define MY_PLUS KC_RBRC
#define MY_MINS KC_SLSH
#define MY_TICK KC_EQL


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTZ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    FNARROW,          KC_RALT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_BSPC, KC_LCTL,                   FNSPCL , KC_SPC,  KC_ENT 
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ARROW] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NLCK, KC_BRIU, KC_VOLU, KC_PSCR, KC_NLCK, KC_PAUS,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_BRID, KC_VOLD, KC_INS,  KC_HOME, KC_PGUP,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PLUS, KC_NUHS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_MUTE, KC_DEL,  KC_END,  KC_PGDN, KC_TRNS,          KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SPECIAL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   MY_TILDE,MY_DLR,  MY_PERC, MY_HASH, MY_S_QUO,                           MY_D_QUO,MY_PLUS, MY_MINS, MY_ASTR, MY_EQUL, MY_TICK,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     MY_EXCL, BCK_A_L, BCK_S_L, BCK_C_L, BCK_R_L, MY_BCKSL,                           MY_SLSH, BCK_R_R, BCK_C_R, BCK_S_R, BCK_A_R, MY_QUES,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_GRV,  KC_NO,   KC_NO,   KC_NO,   MY_AMPR, FNADJ,            KC_RALT, MY_PIPE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_TRNS, KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_G,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, BL_TOGG, BL_BRTG,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, BL_INC,  KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_NO,   KC_NO,   KC_NO,   BL_DEC,  KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

