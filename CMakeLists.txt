cmake_minimum_required(VERSION 3.16)
project(gtest_example LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(GTest REQUIRED)

include_directories(include)

add_library(c_calculator STATIC src/c_calculator.c)
target_include_directories(c_calculator PUBLIC include)

add_library(calculator_lib STATIC src/calculator.cpp)
target_include_directories(calculator_lib PUBLIC include)

add_executable(gtest_example tests/test_c_calculator.cpp tests/test_calculator.cpp tests/test_fizzbuzz.cpp)
target_link_libraries(gtest_example PRIVATE GTest::gtest_main c_calculator calculator_lib)

enable_testing()
add_test(NAME gtest_example COMMAND gtest_example)
