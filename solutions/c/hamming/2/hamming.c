#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
    // Initialize Hamming distance
    int hamming_distance = 0;

    while (*lhs && *rhs) { // Iterate while neither pointer points to '\0'
        if (*lhs != *rhs) { // Compare the characters currently being pointed to
            hamming_distance++; // Increment when characters differ
        }

        lhs++; // Move LHS pointer to the next character
        rhs++; // Move RHS pointer to the next character
    }

    // If only one pointer points to '\0', the strings have different lengths
    if (*lhs != *rhs) {
        return -1;
    }

    // Return Hamming distance
    return hamming_distance;
}