#include "collatz_conjecture.h"

int steps(int start) {
    int x = start;
    int num_steps = 0;

    if (x <= 0) {
        return -1;
    }

    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = x * 3 + 1;
        }

        num_steps++;
    }

    return num_steps;
}