#include "triangle.h"
#include <stdbool.h>

bool is_triangle(triangle_t sides) {
    double a = sides.a;
    double b = sides.b;
    double c = sides.c;

    if ((a <= 0.0) || (b <= 0.0) || (c <= 0.0))
        return false;

    return (a + b >= c) && (b + c >= a) && (a + c >= b);
}

bool is_equilateral(triangle_t sides) {
    if (!is_triangle(sides))
        return false;
    
    double a = sides.a;
    double b = sides.b;
    double c = sides.c;

    return (a == b) && (b == c);
}

bool is_isosceles(triangle_t sides) {
    if (!is_triangle(sides))
        return false;
    
    double a = sides.a;
    double b = sides.b;
    double c = sides.c;

    return (a == b) || (b == c) || (c == a);
}

bool is_scalene(triangle_t sides) {
    if (!is_triangle(sides))
        return false;
    
    double a = sides.a;
    double b = sides.b;
    double c = sides.c;

    return (a != b) && (b != c) && (c != a);
}