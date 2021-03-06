#if !defined(GLOBAL)
  #include "global.h"
#endif

/*
 * Short names for ease of definition of keymap
 */
#define KEY_NO    ( 0x00 | 0xC000 )
#define KEY_FN0   ( 0x01 | 0xC000 )
#define KEY_TRNS  ( 0x02 | 0xC000 )
#define KEY_LYR0  ( 0x03 | 0xC000 )
#define KEY_LYR1  ( 0x04 | 0xC000 )
#define KEY_LYR2  ( 0x05 | 0xC000 )
#define KEY_LYR3  ( 0x06 | 0xC000 )
#define KEY_LYR4  ( 0x07 | 0xC000 )
#define KEY_LYR5  ( 0x08 | 0xC000 )
#define KEY_LYR6  ( 0x09 | 0xC000 )
#define KEY_LYR7  ( 0x0a | 0xC000 )
#define KEY_LYR8  ( 0x0b | 0xC000 )
#define KEY_LYR9  ( 0x0c | 0xC000 )
#define KEY_RSBT  ( 0x0d | 0xC000 ) // Reset Bluetooth
#define KEY_TUSB  ( 0x0e | 0xC000 ) // Toggle USB driver
#define KEY_TGBT  ( 0x0f | 0xC000 ) // Toggle Bluetooth driver
#define KEY_RBPG  ( 0x10 | 0xC000 ) // Reboot Teensy into program mode
#define KEY_MINS KEY_MINUS
#define KEY_EQL KEY_EQUAL
#define KEY_BSLS KEY_BACKSLASH
#define KEY_GRV KEY_TILDE
#define KEY_LBRC KEY_LEFT_BRACE
#define KEY_RBRC KEY_RIGHT_BRACE
#define KEY_BSPC KEY_BACKSPACE
#define KEY_LCTL KEY_LEFT_CTRL
#define KEY_SCLN KEY_SEMICOLON
#define KEY_QUOT KEY_QUOTE
#define KEY_ENT KEY_ENTER
#define KEY_LSFT KEY_LEFT_SHIFT
#define KEY_RSFT KEY_RIGHT_SHIFT
#define KEY_COMM KEY_COMMA
#define KEY_DOT KEY_PERIOD
#define KEY_SLSH KEY_SLASH
#define KEY_LALT KEY_LEFT_ALT
#define KEY_RALT KEY_RIGHT_ALT
#define KEY_LGUI KEY_LEFT_GUI
#define KEY_RGUI KEY_RIGHT_GUI
#define KEY_SPC KEY_SPACE
#define KEY_INS KEY_INSERT
#define KEY_DEL KEY_DELETE
#define KEY_CAPS KEY_CAPS_LOCK
#define KEY_PSCR KEY_PRINTSCREEN
#define KEY_SLCK KEY_SCROLL_LOCK
#define KEY_PAUS KEY_PAUSE
#define KEY_VOLD KEY_MEDIA_VOLUME_DEC
#define KEY_VOLU KEY_MEDIA_VOLUME_INC
#define KEY_MUTE KEY_MEDIA_MUTE
#define KEY_PAST KEYPAD_ASTERIX
#define KEY_PSLS KEYPAD_SLASH
#define KEY_PGUP KEY_PAGE_UP
#define KEY_PGDN KEY_PAGE_DOWN
#define KEY_PENT KEYPAD_ENTER
#define KEY_PPLS KEYPAD_PLUS
#define KEY_PMNS KEYPAD_MINUS
#define KEY_RGHT KEY_RIGHT

#define KEYMAP( \
    K31, K30, K00, K10, K11, K20, K21, K40, K41, K60, K61, K70, K71, K50, K51, \
    K32, K01, K02, K13, K12, K23, K22, K42, K43, K62, K63, K73, K72, K52, \
    K33, K04, K03, K14, K15, K24, K25, K45, K44, K65, K64, K74, K53, \
    K34, K05, K06, K07, K16, K17, K26, K46, K66, K76, K75, K55, K54, \
         K35, K36,           K37,                K57, K56 \
) \
{ \
    { KEY_##K00, KEY_##K01, KEY_##K02, KEY_##K03, KEY_##K04, KEY_##K05, KEY_##K06, KEY_##K07 }, \
    { KEY_##K10, KEY_##K11, KEY_##K12, KEY_##K13, KEY_##K14, KEY_##K15, KEY_##K16, KEY_##K17 }, \
    { KEY_##K20, KEY_##K21, KEY_##K22, KEY_##K23, KEY_##K24, KEY_##K25, KEY_##K26, KEY_NO    }, \
    { KEY_##K30, KEY_##K31, KEY_##K32, KEY_##K33, KEY_##K34, KEY_##K35, KEY_##K36, KEY_##K37 }, \
    { KEY_##K40, KEY_##K41, KEY_##K42, KEY_##K43, KEY_##K44, KEY_##K45, KEY_##K46, KEY_NO    }, \
    { KEY_##K50, KEY_##K51, KEY_##K52, KEY_##K53, KEY_##K54, KEY_##K55, KEY_##K56, KEY_##K57 }, \
    { KEY_##K60, KEY_##K61, KEY_##K62, KEY_##K63, KEY_##K64, KEY_##K65, KEY_##K66, KEY_NO    }, \
    { KEY_##K70, KEY_##K71, KEY_##K72, KEY_##K73, KEY_##K74, KEY_##K75, KEY_##K76, KEY_NO    } \
}

extern const int keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const int keymap_count;
