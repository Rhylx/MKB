#include <stdint.h>
#include "hid_keycodes.h"
#include "hardware_variants.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include <array>
#ifndef KEYMAP_H
#define KEYMAP_H

// TO DEFINE ALL THE KEYS AVAILABLE :

#define KC_TILD MOD(MOD_LSHIFT, KC_GRV)
#define KC_EXLM MOD(MOD_LSHIFT, KC_1)
#define KC_AT   MOD(MOD_LSHIFT, KC_2)
#define KC_HASH MOD(MOD_LSHIFT, KC_3)
#define KC_DLR  MOD(MOD_LSHIFT, KC_4)
#define KC_PERC MOD(MOD_LSHIFT, KC_5)
#define KC_CIRC MOD(MOD_LSHIFT, KC_6)
#define KC_AMPR MOD(MOD_LSHIFT, KC_7)
#define KC_ASTR MOD(MOD_LSHIFT, KC_8)
#define KC_LPRN MOD(MOD_LSHIFT, KC_9)
#define KC_RPRN MOD(MOD_LSHIFT, KC_0)
#define KC_UNDS MOD(MOD_LSHIFT, KC_MINUS)
#define KC_PLUS MOD(MOD_LSHIFT, KC_EQUAL)

#define KC_LCBR MOD(MOD_LSHIFT, KC_LBRC)
#define KC_RCBR MOD(MOD_LSHIFT, KC_RBRC)
#define KC_PIPE MOD(MOD_LSHIFT, KC_BSLS)

#define KC_COLN MOD(MOD_LSHIFT, KC_SCLN)
#define KC_DQUO MOD(MOD_LSHIFT, KC_QUOTE)

#define KC_LT   MOD(MOD_LSHIFT, KC_COMMA)
#define KC_GT   MOD(MOD_LSHIFT, KC_DOT)
#define KC_QUES MOD(MOD_LSHIFT, KC_SLASH)

#define KC_NUTL MOD(MOD_LSHIFT,KC_NUHS) // Non-US # and ~
#define KC_NUPI MOD(MOD_LSHIFT,KC_NUBS) // Non-US \ and |


#define _L0  0
#define _L1  1
#define _L2  2

void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;


#endif
