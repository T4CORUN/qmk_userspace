#pragma once

#if defined(ENCODER_ENABLE)
#undef ENCODER_RESOLUTION
#undef ENCODER_RESOLUTION_RIGHT

#define ENCODER_RESOLUTION 4
#define ENCODER_RESOLUTION_RIGHT 4
#endif // ENCODER_ENABLE

#if defined(OLED_ENABLE)
#   define OLED_KEYBOARD_NAME "KLOR Saegewerk"
#endif // OLED_ENABLE
