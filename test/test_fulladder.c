// test_fulladder.c

#include <stdint.h>
#include "unity.h"
#include "../include/adders/fulladder.h"

typedef uint8_t bit;

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Full Adder Truth Table
    | a | b | c |sum|carry|
    | 0 | 0 | 0 | 0 |  0  |
    | 0 | 0 | 1 | 1 |  0  |
    | 0 | 1 | 0 | 1 |  0  |
    | 0 | 1 | 1 | 0 |  1  |
    | 1 | 0 | 0 | 1 |  0  |
    | 1 | 0 | 1 | 0 |  1  |
    | 1 | 1 | 0 | 0 |  1  |
    | 1 | 1 | 1 | 1 |  1  |
 */

void test_fulladder_should_return_000_for_000(void) {
    bit a = 0;
    bit b = 0;
    bit c = 0;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_fulladder_should_return_100_for_001(void) {
    bit a = 0;
    bit b = 0;
    bit c = 1;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_fulladder_should_return_100_for_010(void) {
    bit a = 0;
    bit b = 1;
    bit c = 0;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_fulladder_should_return_010_for_011(void) {
    bit a = 0;
    bit b = 1;
    bit c = 1;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(1, carry);
}

void test_fulladder_should_return_100_for_100(void) {
    bit a = 1;
    bit b = 0;
    bit c = 0;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(0, carry);
}

void test_fulladder_should_return_010_for_101(void) {
    bit a = 1;
    bit b = 0;
    bit c = 1;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(1, carry);
}

void test_fulladder_should_return_010_for_110(void) {
    bit a = 1;
    bit b = 1;
    bit c = 0;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(0, sum);
    TEST_ASSERT_EQUAL_UINT8(1, carry);
}

void test_fulladder_should_return_110_for_111(void) {
    bit a = 1;
    bit b = 1;
    bit c = 1;
    bit sum, carry;
    fulladder(a, b, c, &sum, &carry);
    TEST_ASSERT_EQUAL_UINT8(1, sum);
    TEST_ASSERT_EQUAL_UINT8(1, carry);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_fulladder_should_return_000_for_000);
    RUN_TEST(test_fulladder_should_return_100_for_001);
    RUN_TEST(test_fulladder_should_return_100_for_010);
    RUN_TEST(test_fulladder_should_return_010_for_011);
    RUN_TEST(test_fulladder_should_return_100_for_100);
    RUN_TEST(test_fulladder_should_return_010_for_101);
    RUN_TEST(test_fulladder_should_return_010_for_110);
    RUN_TEST(test_fulladder_should_return_110_for_111);
    return UNITY_END();
}

