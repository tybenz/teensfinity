#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =
    KEYMAP(GRV ,  1   , 2   , 3   , 4        , 5       , 6     , 7    , 8   , 9   , 0   , MINS, EQL , GRV , BSPC, \
           TAB ,  Q   , W   , E   , R        , T       , NO    , Y    , U   , I   , O   , P   , LBRC, RBRC, BSLS, \
           LCTL,  A   , S   , D   , F        , G       , NO    , H    , J   , K   , L   , SCLN, QUOT, NO  , ENT , \
           LSFT,  Z   , X   , C   , V        , NO      , NO    , B    , N   , M   , COMM, DOT , SLSH, UP  , RSFT, \
           FN0 ,  LALT, LGUI, NO  , NO       , SPC     , NO    , NO   , NO  , NO  , NO  , RGUI, LEFT, DOWN, RGHT ),

    [1] =
    KEYMAP(ESC , F1   , F2  , F3  , F4       , F5      , F6    , F7   , F8  , F9  , F10 , F11 , F12 , F13 , DEL , \
           TRNS, TRNS , TRNS, TRNS, TRNS     , TRNS    , TRNS  , TRNS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS , TRNS, TRNS, TRNS     , TRNS    , TRNS  , TRNS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, MPRV , MPLY, MNXT, _VOLDOWN , _VOLUP  , _MUTE , TRNS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS , TRNS, TRNS, TRNS     , TRNS    , TRNS  , TRNS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

