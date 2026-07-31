#include <gtest/gtest.h>
#include "c_calculator.h"

TEST(FizzBuzzTest, ReturnsNumberWhenNotDivisibleByThreeOrFive) {
    EXPECT_EQ(fizzbuzz(1), 1);
    EXPECT_EQ(fizzbuzz(2), 2);
}

TEST(FizzBuzzTest, ReturnsFizzForMultiplesOfThree) {
    EXPECT_EQ(fizzbuzz(3), 3);
    EXPECT_EQ(fizzbuzz(6), 3);
}

TEST(FizzBuzzTest, ReturnsBuzzForMultiplesOfFive) {
    EXPECT_EQ(fizzbuzz(5), 5);
    EXPECT_EQ(fizzbuzz(10), 5);
}

TEST(FizzBuzzTest, ReturnsFizzBuzzForMultiplesOfFifteen) {
    EXPECT_EQ(fizzbuzz(15), 15);
    EXPECT_EQ(fizzbuzz(30), 15);
}
