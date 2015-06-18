#include "keymap_common.h"

/*
KLE layout
[{c:"#06c4f6"},"~\n`",{c:"#cccccc"},"!\n1",{c:"#06c4f6"},"@\n2",{c:"#cccccc"},"#\n3",{c:"#06c4f6"},"$\n4",{c:"#d71b11"},"%\n5",{c:"#06c4f6"},"^\n6",{c:"#cccccc"},"&\n7",{c:"#06c4f6"},"*\n8",{c:"#cccccc"},"(\n9",{c:"#06c4f6"},")\n0",{c:"#cccccc"},"_\n-",{c:"#d71b11"},"+\n=",{c:"#cccccc"},"~\n`",{c:"#06c4f6"},"BkSpc"],
[{w:1.5},"Tab",{c:"#cccccc"},"Q",{c:"#06c4f6"},"W",{c:"#cccccc"},"E",{c:"#06c4f6"},"R",{c:"#d71b11"},"T",{c:"#06c4f6"},"Y",{c:"#cccccc"},"U",{c:"#06c4f6"},"I",{c:"#cccccc"},"O",{c:"#06c4f6"},"P",{c:"#cccccc"},"{\n[",{c:"#d71b11"},"}\n]",{c:"#cccccc",w:1.5},"|\n\\"],
[{c:"#06c4f6",w:1.75},"Caps Lock",{c:"#cccccc"},"A",{c:"#06c4f6"},"S",{c:"#cccccc"},"D",{c:"#06c4f6"},"F",{c:"#d71b11"},"G",{c:"#06c4f6"},"H",{c:"#cccccc"},"J",{c:"#06c4f6"},"K",{c:"#cccccc"},"L",{c:"#06c4f6"},":\n;",{c:"#cccccc"},"\"\n'",{w:2.25},"Enter"],
[{c:"#06c4f6",w:2.25},"Shift",{c:"#cccccc"},"Z",{c:"#06c4f6"},"X",{c:"#cccccc"},"C",{c:"#06c4f6"},"V",{c:"#d71b11"},"B",{c:"#06c4f6"},"N",{c:"#cccccc"},"M",{c:"#06c4f6"},"<\n,",{c:"#cccccc"},">\n.",{c:"#06c4f6"},"?\n/",{c:"#d71b11",w:1.75},"Shift",{c:"#cccccc"},"Shift"],
[{c:"#06c4f6",w:1.25},"Ctrl",{c:"#cccccc",w:1.25},"Win",{c:"#06c4f6",w:1.25},"Alt",{c:"#d71b11",w:6.25},"",{c:"#cccccc",w:1.25},"Alt",{c:"#06c4f6",w:1.25},"Win",{c:"#d71b11",w:1.25},"Menu",{c:"#cccccc",w:1.25},"Ctrl"]
 */

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =
    KEYMAP(GRV ,  1   , 2   , 3   , 4       , 5     , 6     , 7   , 8   , 9   , 0   , MINS, EQL , GRV , BSPC, \
           TAB ,  Q   , W   , E   , R       , T     , Y     , U   , I   , O   , P   , LBRC, RBRC, BSLS, NO, \
           LCTL,  A   , S   , D   , F       , G     , H     , J   , K   , L   , SCLN, QUOT, NO  , ENT , NO, \
           LSFT,  Z   , X   , C   , V       , B     , N     , M   , COMM, DOT , SLSH, NO  , UP  , RSFT, NO, \
           FN0 ,  LALT, LGUI, NO  , NO      , SPC   , NO    , NO  , NO  , RGUI, LEFT, NO  , DOWN, RGHT, NO),

    [1] =
    KEYMAP(ESC , F1   , F2  , F3  , F4      , F5    , F6    , F7  , F8  , F9  , F10 , F11 , F12 , F13 , DEL , \
           CAPS, TRNS , TRNS, TRNS, BSPC    , HOME  , PGUP  , PSCR, SLCK, PAUS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS , TRNS, TRNS, DEL     , END   , PGDOWN, TRNS, INS , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, MPRV , MPLY, MNXT, _VOLDOWN, _VOLUP, _MUTE , TRNS, TRNS, TRNS, WAKE, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS , TRNS, TRNS, TRNS    , TRNS  , TRNS  , TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

