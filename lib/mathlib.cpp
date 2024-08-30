#include "mathlib.h"

int MathLib::add(int a, int b) {
    return a + b;
}

int MathLib::subtract(int a, int b) {
    return a - b;
}

int MathLib::multiply(int a, int b) {
    return a * b;
}

int MathLib::divide(int a, int b) {
    return b != 0 ? a / b : 0;
}
