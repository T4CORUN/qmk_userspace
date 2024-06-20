#pragma once

#include "t4corun.h"

#define OLED_RENDER_KEYLOCK_NAME      "Lock"
#define OLED_RENDER_MODS_NAME         "Mods"
#define OLED_RENDER_FEATURE_NAME      "Feat"
#define OLED_RENDER_WPM_NAME          "Wpm"

#if defined(OLED_DISPLAY_128X64)
#   define OLED_RENDER_DEFAULT_LAYER1    "QWERTY    "
#   define OLED_RENDER_DEFAULT_LAYER2    "COLEMAK DH"
#   define OLED_RENDER_DEFAULT_LAYER3    "GAME      "

#   define OLED_RENDER_LAYER_2           "Navigation"
#   define OLED_RENDER_LAYER_3           "Number    "
#   define OLED_RENDER_LAYER_4           "Symbol    "
#   define OLED_RENDER_LAYER_5           "Config    "
#else
//128x32 are ? x 5 char wide
#   define OLED_RENDER_DEFAULT_LAYER1    "Qwrty"
#   define OLED_RENDER_DEFAULT_LAYER2    "Clmak"
#   define OLED_RENDER_DEFAULT_LAYER3    "Game "

#   define OLED_RENDER_LAYER_1           "     "
#   define OLED_RENDER_LAYER_2           " Nav "
#   define OLED_RENDER_LAYER_3           " Num "
#   define OLED_RENDER_LAYER_4           " Sym "
#   define OLED_RENDER_LAYER_5           " Cfg "
#endif

// LUNA PET Variables
#if defined(WPM_ENABLE)
#   define OLED_LUNA_X                   0
#   define OLED_LUNA_Y                   13
#   define OLED_LUNA_MIN_WALK_SPEED      10
#   define OLED_LUNA_MIN_RUN_SPEED       40
#   define OLED_LUNA_ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#   define OLED_LUNA_ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024
#endif //WPM_ENABLE

void render_layer_state(void);
void render_layer_state_graphic(void);
void render_keylock_status(bool vertical);
void render_mod_status(bool vertical);
void render_feature_status(bool vertical);


static const char PROGMEM scroll_off[]  = {0xC0, 0};
static const char PROGMEM scroll_on[]   = {0xC1, 0};

static const char PROGMEM num_off[]     = {0xC2, 0};
static const char PROGMEM num_on[]      = {0xC3, 0};

static const char PROGMEM caps_off[]    = {0xC4, 0};
static const char PROGMEM caps_on[]     = {0xC5, 0};

static const char PROGMEM shift_off_upper[]   = {0x80, 0x81, 0x82, 0};
static const char PROGMEM shift_off_lower[]   = {0xA0, 0xA1, 0xA2, 0};
static const char PROGMEM shift_on_upper[]    = {0x83, 0x84, 0x85, 0};
static const char PROGMEM shift_on_lower[]    = {0xA3, 0xA4, 0xA5, 0};

static const char PROGMEM ctrl_off_upper[]    = {0x86, 0x87, 0x88, 0};
static const char PROGMEM ctrl_off_lower[]    = {0xA6, 0xA7, 0xA8, 0};
static const char PROGMEM ctrl_on_upper[]     = {0x89, 0x8A, 0x8B, 0};
static const char PROGMEM ctrl_on_lower[]     = {0xA9, 0xAA, 0xAB, 0};

static const char PROGMEM alt_off_upper[]     = {0x8C, 0x8D, 0x8E, 0};
static const char PROGMEM alt_off_lower[]     = {0xAC, 0xAD, 0xAE, 0};
static const char PROGMEM alt_on_upper[]      = {0x8F, 0x90, 0x91, 0};
static const char PROGMEM alt_on_lower[]      = {0xAF, 0xB0, 0xB1, 0};

static const char PROGMEM gui_off_upper[]     = {0x92, 0x93, 0x94, 0};
static const char PROGMEM gui_off_lower[]     = {0xB2, 0xB3, 0xB4, 0};
static const char PROGMEM gui_on_upper[]      = {0x95, 0x96, 0x97, 0};
static const char PROGMEM gui_on_lower[]      = {0xB5, 0xB6, 0xB7, 0};

static const char PROGMEM rgb_off[]     = {0xC5, 0xC6, 0};
static const char PROGMEM rgb_on[]      = {0xC7, 0xC8, 0};

static const char PROGMEM dragscr_off[] = {0xC9, 0xCA, 0};
static const char PROGMEM dragscr_on[]  = {0xCB, 0xCC, 0};

static const char PROGMEM sound_off[]   = {0x8F, 0x90, 0};
static const char PROGMEM sound_on[]    = {0xAF, 0xB0, 0};

static const char PROGMEM haptic_off[]  = {0x91, 0x92, 0};
static const char PROGMEM haptic_on[]   = {0xB1, 0xB2, 0};

static const char PROGMEM lyr_cfg[] = {
  0xE1, 0xD1, 0xD2, 0xD3, 0xE1,
  0xE1, 0xBA, 0xBB, 0xBC, 0xE1,
  0xE1, 0xB7, 0xB8, 0xB9, 0xE1,
  0xE1, 0xD7, 0xD8, 0xD9, 0xE1, 0x00
};

static const char PROGMEM lyr_sym[] = {
  0xE1, 0x97, 0x98, 0x99, 0xE1,
  0xE1, 0xDA, 0xDB, 0xDC, 0xE1,
  0xE1, 0xB7, 0xB8, 0xB9, 0xE1,
  0xE1, 0xD7, 0xD8, 0xD9, 0xE1, 0x00
};

static const char PROGMEM lyr_num[] = {
  0xE1, 0x97, 0x98, 0x99, 0xE1,
  0xE1, 0x9A, 0x9B, 0x9C, 0xE1,
  0xE1, 0xBA, 0xBB, 0xBC, 0xE1,
  0xE1, 0xD7, 0xD8, 0xD9, 0xE1, 0x00
};

static const char PROGMEM lyr_nav[] = {
  0xE1, 0x97, 0x98, 0x99, 0xE1,
  0xE1, 0xB7, 0xB8, 0xB9, 0xE1,
  0xE1, 0xDA, 0xDB, 0xDC, 0xE1,
  0xE1, 0xD7, 0xD8, 0xD9, 0xE1, 0x00
};

static const char PROGMEM lyr_def[] = {
  0xE1, 0x97, 0x98, 0x99, 0xE1,
  0xE1, 0xB7, 0xB8, 0xB9, 0xE1,
  0xE1, 0x9A, 0x9B, 0x9C, 0xE1,
  0xE1, 0xD4, 0xD5, 0xD6, 0xE1, 0x00
};

static const char PROGMEM qmk_logo_small[] = {
  0xE1, 0x9D, 0x9E, 0x9F, 0xE1,
  0xE1, 0xBD, 0xBE, 0xBF, 0xE1,
  0xE1, 0xDD, 0xDE, 0xDF, 0xE1, 0x00
};

#if defined(OLED_DISPLAY_128X64)

static const char PROGMEM sep_v[] = {0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0};

static const char PROGMEM klor_small_face_1[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0xE1, 0};
static const char PROGMEM klor_small_face_2[] = {0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xE1, 0};

static const char PROGMEM klor_face[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
    0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 
    0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif // OLED_DISPLAY_128X64