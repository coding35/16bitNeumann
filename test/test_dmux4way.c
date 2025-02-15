// test_dmux4way.c

#include "../unity/src/unity.h"
#include "../include/plexers/dmux4way.h"
#include <stdlib.h>

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    4-way 16-bit Multiplexor:
    |in | sel  | a | b | c | d |
    | 0 |  00  | 0 | 0 | 0 | 0 |
    | 0 |  01  | 0 | 0 | 0 | 0 |
    | 0 |  10  | 0 | 0 | 0 | 0 |
    | 0 |  11  | 0 | 0 | 0 | 0 |
    | 1 |  00  | 1 | 0 | 0 | 0 |
    | 1 |  01  | 0 | 1 | 0 | 0 |
    | 1 |  10  | 0 | 0 | 1 | 0 |
    | 1 |  11  | 0 | 0 | 0 | 1 |
 */

void test_dmux4way_should_return_0000_for_0000_00(void) {
    bit in = 0;
    bit sel[] = {0, 0};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0000_for_0000_01(void) {
    bit in = 0;
    bit sel[] = {0, 1};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0000_for_0000_10(void) {
    bit in = 0;
    bit sel[] = {1, 0};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0000_for_0000_11(void) {
    bit in = 0;
    bit sel[] = {1, 1};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_1000_for_1000_00(void) {
    bit in = 1;
    bit sel[] = {0, 0};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(1, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0100_for_1000_01(void) {
    bit in = 1;
    bit sel[2] = {1, 0}; // represents 01 in binary (big-endian)
    bit a = 0, b = 0, c = 0, d = 0;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(1, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0010_for_1000_10(void) {
    bit in = 1;
    bit sel[2] = {0, 1}; // represents 10 in binary (big-endian)
    bit a = 0, b = 0, c = 0, d = 0;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(1, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
}

void test_dmux4way_should_return_0001_for_1000_11(void) {
    bit in = 1;
    bit sel[] = {1, 1};
    bit a, b, c, d;
    dmux4way(in, sel, &a, &b, &c, &d);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(1, d);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_dmux4way_should_return_0000_for_0000_00);
    RUN_TEST(test_dmux4way_should_return_0000_for_0000_01);
    RUN_TEST(test_dmux4way_should_return_0000_for_0000_10);
    RUN_TEST(test_dmux4way_should_return_0000_for_0000_11);
    RUN_TEST(test_dmux4way_should_return_1000_for_1000_00);
    RUN_TEST(test_dmux4way_should_return_0100_for_1000_01);
    RUN_TEST(test_dmux4way_should_return_0010_for_1000_10);
    RUN_TEST(test_dmux4way_should_return_0001_for_1000_11);
    return UNITY_END();
}

