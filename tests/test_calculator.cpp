#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, AddTwoNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, SubtractTwoNumbers) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2);
}

TEST(CalculatorTest, ValueState) {
    Calculator calc;
    calc.setValue(10);
    EXPECT_EQ(calc.getValue(), 10);
}
