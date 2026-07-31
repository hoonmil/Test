#include "calculator.h"

Calculator::Calculator() : value_(0) {}

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::getValue() const {
    return value_;
}

void Calculator::setValue(int value) {
    value_ = value;
}
