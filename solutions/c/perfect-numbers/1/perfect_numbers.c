#include "perfect_numbers.h"

kind classify_number(int number) {
    if (number <= 0)
        return ERROR;

    int sum = get_aliquot_sum(number);

    if (sum > number)
        return ABUNDANT_NUMBER;

    if (sum < number)
        return DEFICIENT_NUMBER;

    return PERFECT_NUMBER;
}

int get_aliquot_sum(int number) {
    int sum = 0;

    for (int divisor = 1; divisor < number; divisor++) {
        if (number % divisor == 0)
            sum += divisor;
    }

    return sum;
}