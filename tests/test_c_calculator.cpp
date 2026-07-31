#include <gtest/gtest.h>
#include "c_calculator.h"

TEST(CCalculatorTest, AddTwoNumbers) {
    EXPECT_EQ(add_int(2, 3), 5);
}

TEST(CCalculatorTest, SubtractTwoNumbers) {
    EXPECT_EQ(subtract_int(5, 3), 2);
}
