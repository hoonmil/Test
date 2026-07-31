#include "c_calculator.h"

int add_int(int a, int b) {
    return a + b;
}

int subtract_int(int a, int b) {
    return a - b;
}

int fizzbuzz(int inputNumber) {
    if (inputNumber % 15 == 0) {
        return 15;
    }
    if (inputNumber % 3 == 0) {
        return 3;
    }
    if (inputNumber % 5 == 0) {
        return 5;
    }
    return inputNumber;
}
