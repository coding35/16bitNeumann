// test_not16.c

#include "../unity/src/unity.h"
#include "../include/gates/not16.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Not16 Truth Table
    |        in        |       out        |
    | 0000000000000000 | 1111111111111111 |
    | 1111111111111111 | 0000000000000000 |
    | 1010101010101010 | 0101010101010101 |
    | 0011110011000011 | 1100001100111100 |
    | 0001001000110100 | 1110110111001011 |
*/

void test_not16_should_return_1111111111111111_for_0000000000000000(void) {
    bit a[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    bit b[16];
    not16(a, b);
    bit expected[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, b, 16);
}

void test_not16_should_return_0000000000000000_for_1111111111111111(void) {
    bit a[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    bit b[16];
    not16(a, b);
    bit expected[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, b, 16);
}

void test_not16_should_return_0101010101010101_for_1010101010101010(void) {
    bit a[16] = { 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 };
    bit b[16];
    not16(a, b);
    bit expected[16] = { 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, b, 16);
}

void test_not16_should_return_1100001100111100_for_0011110011000011(void) {
    bit a[16] = { 0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1 };
    bit b[16];
    not16(a, b);
    bit expected[16] = { 1,1,0,0,0,0,1,1,0,0,1,1,1,1,0,0 };
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, b, 16);
}

void test_not16_should_return_1110110111001011_for_0001001000110100(void) {
    bit a[16] = { 0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0 };
    bit b[16];
    not16(a, b);
    bit expected[16] = { 1,1,1,0,1,1,0,1,1,1,0,0,1,0,1,1 };
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, b, 16);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_not16_should_return_1111111111111111_for_0000000000000000);
    RUN_TEST(test_not16_should_return_0000000000000000_for_1111111111111111);
    RUN_TEST(test_not16_should_return_0101010101010101_for_1010101010101010);
    RUN_TEST(test_not16_should_return_1100001100111100_for_0011110011000011);
    RUN_TEST(test_not16_should_return_1110110111001011_for_0001001000110100);
    return UNITY_END();
}
