#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    // Immediately disallow when LHS and RHS differ in length
    if (strlen(lhs) != strlen(rhs)) {
        return -1;
    }

    // Initialize counter for Hamming distance
    int hamming_distance = 0;

    // For each difference between LHS and RHS, increment our Hamming distance
    for (int i = 0; lhs[i] != '\0'; i++) {
        if (lhs[i] != rhs[i]) {
            hamming_distance++;
        }
    }

    // Return the Hamming distance
    return hamming_distance;
}