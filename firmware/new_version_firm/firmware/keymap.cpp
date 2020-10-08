#include "keymap.h"

/*
 LAYOUT 0, what it will be like in the end (after xkb process it) :
  ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____
 |    | Q  | W  | e  | R  | T  | Y  | U  | I  | O  | P  | L2 |
 | TAB| q  | w  | e  | r  | t  | y  | u  | i  | o  | p  | L2 |
 =============================================================
 | ^  | A  | S  | D  | F  | G  | :  | H  | J  | K  | L  | ^  |
 | |  | a  | s  | d  | f  | g  | .  | h  | j  | k  | l  | |  |
 =============================================================
 | ^  | Z  | X  | C  | V  | B  | N  | M  | `  | ¨  | ?  | ç  |
 | |  | z  | x  | c  | v  | b  | n  | m  | ´  | ^  | !  | @  |
 =============================================================
 |    |    |    |    |    |    |    |    |    |    |    |    |
 |    |    |CTRL| SUP| ESC| L1 ||_| | <- | ENT| ALT|    |    |
 =============================================================
*/

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,     KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,     KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,     KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,     KC_NO,   KC_NO,     KC_NO ));




void setupKeymap() {

	uint32_t layer0[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,    KC_I,     KC_O,   KC_P,     LAYER_2,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_DOT, KC_H,    KC_J,     KC_K,   KC_L,     KC_RSFT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,   KC_M,    KC_SLASH, KC_GRV, KC_MINS,  KC_EQUAL,
        _______, _______, KC_LCTL, KC_LGUI, KC_ESC, LAYER_1, KC_SPC, KC_BSPC, KC_ENT,   KC_LALT, _______, _______ );


/*
LAYOUT 1 :
  ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____
 |    |    |    |    |    |    |    |    |    |    |    |    |
 | TAB|  # |  > |  - | {  | +  | '  | 7  | 8  | 9  |    | L2 |
 =============================================================
 | ^  |    |    |    |    |    |    |    |    |    |    |  ^ |
 | |  |  § |  / |  $ | (  | [  | ,  | 4  | 5  | 6  |  | |  | |
 =============================================================
 | ^  |    |    |    |    |    |    |    |    |    |    |    |
 | |  |LEFT|DOWN| UP |RGHT|    | 0  | 1  | 2  | 3  | &  |    |
 =============================================================
 |    |    |    |    |    |    |    |    |    |    |    |    |
 |    |    |CTRL| SUP| ESC| L1 ||_| | <- | ENT| ALT|    |    |
 =============================================================
*/

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_TAB,  KC_PMNS, KC_SCOLON, KC_KP_3, KC_KP_5, KC_END,   KC_SLCK, KC_7,    KC_8,   KC_9,    _______,   LAYER_2,
    KC_LSFT, KC_KP_1, KC_KP_2,   KC_KP_8, KC_F24,  KC_LBRC,  KC_COMM, KC_4,    KC_5,   KC_6,    KC_KP_DOT, KC_RSFT,
    KC_LSFT, KC_LEFT, KC_DOWN,   KC_UP,   KC_RGHT, _______, KC_0,    KC_1,    KC_2,   KC_3,     KC_F19,    _______,
    _______, _______, KC_LCTL,   KC_LGUI, KC_ESC,  LAYER_1,  KC_SPC,  KC_BSPC, KC_ENT, KC_LALT, _______,   _______ );

/*
 LAYOUT 2:
  ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____
 |    |    |    |    |    |    |    |    |    |    |    |    |
 | TAB|  % |  < |  _ | }  |    | "  | *  |    |    |    | L2 |
 =============================================================
 | ^  |    |    |    |    |    |    |    |    |    |    |  ^ |
 | |  |  ~ |  \ |  $ | )  | ]  | ;  | =  |    |    |  | |  | |
 =============================================================
 | ^  |    |    |    |    |    |    |    |    |    |    |    |
 | |  |    |    |    |    |    |    |    |    |    |    |    |
 =============================================================
 |    |    |    |    |    |    |    |    |    |    |    |    |
 |    |    |CTRL| SUP| ESC| L1 ||_| | <- | ENT| ALT|    |    |
 =============================================================
*/

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_TAB,  KC_PSLS, KC_PPLS, KC_KP_9, KC_KP_6, _______, KC_QUOT, KC_PAST, _______, _______, _______,   LAYER_2,
    KC_LSFT, KC_KP_7, KC_BSLS, KC_KP_8, KC_KP_0, KC_RBRC, KC_PEQL, KC_KP_4, _______, _______, KC_KP_DOT, KC_RSFT,
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______ ,
    _______, _______, KC_LCTL, KC_LGUI, KC_ESC,  KC_SPC,  KC_SPC,  KC_BSPC, KC_ENT,  KC_LALT, _______,   _______ );

    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L0, Method::PRESS, layer0[row][col]);
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
        }
    }

}

