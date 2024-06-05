# Set build options for
# - consistent configuration across all keyboards
# - enable features specific to certain board (e.g. encoders, rgb, oled)
# - a way to save memory on MCU

# ---------------------------------------------------------
# set defaults on these qmk features if not defined 
# in the individual keyboard rules.mk
# 
# ?= means set the value if its not defined elsewhere


# optional features
# use these values if not defined at the keyboard level
LTO_ENABLE ?= no
MAGIC_ENABLE ?= no
CONSOLE_ENABLE ?= no
UNICODE_ENABLE ?= no
SPACE_CADET_ENABLE ?= no
GRAVE_ESC_ENABLE ?= no

DYNAMIC_MACRO_ENABLE ?= yes
RGB_MATRIX_ENABLE ?= no
RGBLIGHT_ENABLE ?= no
POINTING_DEVICE_ENABLE ?= no
OLED_ENABLE ?= no
ENCODER_ENABLE ?= no
ENCODER_MAP_ENABLE ?= no
HAPTIC_ENABLE ?= no
AUDIO_ENABLE ?= no
WPM_ENABLE ?= yes

# qmk features we will force as these are critical for my workflow
EXTRAKEY_ENABLE = yes
CAPS_WORD_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes


# ---------------------------------------------------------
# include my code that will be common across all my keyboards

SRC +=                     \
	t4corun.c              \
	features/taphold.c     \
	features/capsword.c    \
	features/keyoverride.c \

INTROSPECTION_KEYMAP_C += features/combo.c

# ---------------------------------------------------------
# include optional code for enabled features for each keyboard

ifeq ($(strip $(OLED_ENABLE)), yes)
  ifeq ($(filter $(KEYBOARD), klor klor/2040),)
    SRC += features/oled32.c
  else
    SRC += features/oled64.c
  endif
endif

ifeq ($(strip $(AUDIO_ENABLE)), yes)
  MUSIC_MODE = no
endif