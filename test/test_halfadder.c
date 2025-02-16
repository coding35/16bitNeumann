// test_halfadder.c

#include <stdint.h>
#include "unity.h"
#include "../include/adders/halfadder.h"

typedef uint8_t bit;

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Half Adder Truth Table
    | A | B | Sum | Carry |
    |---|---|-----|-------|
    | 0 | 0 | 0   | 0     |
    | 0 | 1 | 1   | 0     |
    | 1 | 0 | 1   | 0     |
    | 1 | 1 | 0   | 1     |
 */

void test_halfadder_should_return_00_for_00(void) {
    bit a = 0;
    bit b = 0;
    bit sum, carry;
    halfadder(a, b, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_halfadder_should_return_10_for_01(void) {
    bit a = 0;
    bit b = 1;
    bit sum, carry;
    halfadder(a, b, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_halfadder_should_return_10_for_10(void) {
    bit a = 1;
    bit b = 0;
    bit sum, carry;
    halfadder(a, b, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_halfadder_should_return_01_for_11(void) {
    bit a = 1;
    bit b = 1;
    bit sum, carry;
    halfadder(a, b, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(1, carry);
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_halfadder_should_return_00_for_00);
    RUN_TEST(test_halfadder_should_return_10_for_01);
    RUN_TEST(test_halfadder_should_return_10_for_10);
    RUN_TEST(test_halfadder_should_return_01_for_11);
    return UNITY_END();
}