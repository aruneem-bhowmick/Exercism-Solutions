#include "darts.h"
#include <stdint.h>

uint8_t score (coordinate_t landing_point) {
    double sum_of_squares = (landing_point.x * landing_point.x) + (landing_point.y * landing_point.y);

    if (sum_of_squares <= 1) {
        return 10;
    } else if (sum_of_squares <= 25) {
        return 5;
    } else if (sum_of_squares <= 100) {
        return 1;
    } else {
        return 0;
    }
}