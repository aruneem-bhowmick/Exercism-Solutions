#include "resistor_color.h"
const resistor_band_t *colors(void) {
    static const resistor_band_t colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

    return colors;
}

int color_code(resistor_band_t color) {
    return color;
}