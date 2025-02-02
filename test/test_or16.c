// test_or16.c

#include "../unity/src/unity.h"
#include <stdlib.h>
#include "../include/gates/or16.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Or16 Truth Table
    |        a         |        b         |       out        |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 |
    | 0000000000000000 | 1111111111111111 | 1111111111111111 |
    | 1111111111111111 | 1111111111111111 | 1111111111111111 |
    | 1010101010101010 | 0101010101010101 | 1111111111111111 |
    | 0011110011000011 | 0000111111110000 | 0011111111110011 |
    | 0001001000110100 | 1001100001110110 | 1001101001110110 |
*/

void test_or16_should_return_0000000000000000_for_0000000000000000_0000000000000000(void) {
    bit a[16] = {0}, b[16] = {0};
    bit* out = or16(a, b);
    for (int i = 0; i < 16; i++) {
        TEST_ASSERT_EQUAL_UINT8(0, out[i]);
    }
    free(out);
}

void test_or16_should_return_1111111111111111_for_0000000000000000_1111111111111111(void) {
    bit a[16] = {0};
    bit b[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    bit* out = or16(a, b);
    for (int i = 0; i < 16; i++) {
        TEST_ASSERT_EQUAL_UINT8(1, out[i]);
    }
    free(out);
}

void test_or16_should_return_1111111111111111_for_1111111111111111_1111111111111111(void) {
    bit a[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    bit b[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    bit* out = or16(a, b);
    for (int i = 0; i < 16; i++) {
        TEST_ASSERT_EQUAL_UINT8(1, out[i]);
    }
    free(out);
}

void test_or16_should_return_1111111111111111_for_1010101010101010_0101010101010101(void) {
    bit a[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    bit b[16] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    bit* out = or16(a, b);
    for (int i = 0; i < 16; i++) {
        TEST_ASSERT_EQUAL_UINT8(1, out[i]);
    }
    free(out);
}

void test_or16_should_return_0011111111110011_for_0011110011000011_0000111111110000(void) {
    bit a[16] = {0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1};
    bit b[16] = {0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0};
    bit* out = or16(a, b);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(1, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(1, out[5]);
    TEST_ASSERT_EQUAL_UINT8(1, out[6]);
    TEST_ASSERT_EQUAL_UINT8(1, out[7]);
    TEST_ASSERT_EQUAL_UINT8(1, out[8]);
    TEST_ASSERT_EQUAL_UINT8(1, out[9]);
    TEST_ASSERT_EQUAL_UINT8(1, out[10]);
    TEST_ASSERT_EQUAL_UINT8(1, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(0, out[13]);
    TEST_ASSERT_EQUAL_UINT8(1, out[14]);
    TEST_ASSERT_EQUAL_UINT8(1, out[15]);
    free(out);
}

void test_or16_should_return_1001101001110110_for_0001001000110100_1001100001110110(void) {
    bit a[16] = {0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0};
    bit b[16] = {1,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0};
    bit* out = or16(a, b);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(1, out[6]);
    TEST_ASSERT_EQUAL_UINT8(0, out[7]);
    TEST_ASSERT_EQUAL_UINT8(0, out[8]);
    TEST_ASSERT_EQUAL_UINT8(1, out[9]);
    TEST_ASSERT_EQUAL_UINT8(1, out[10]);
    TEST_ASSERT_EQUAL_UINT8(1, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(1, out[13]);
    TEST_ASSERT_EQUAL_UINT8(1, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_or16_should_return_0000000000000000_for_0000000000000000_0000000000000000);
    RUN_TEST(test_or16_should_return_1111111111111111_for_0000000000000000_1111111111111111);
    RUN_TEST(test_or16_should_return_1111111111111111_for_1111111111111111_1111111111111111);
    RUN_TEST(test_or16_should_return_1111111111111111_for_1010101010101010_0101010101010101);
    RUN_TEST(test_or16_should_return_0011111111110011_for_0011110011000011_0000111111110000);
    RUN_TEST(test_or16_should_return_1001101001110110_for_0001001000110100_1001100001110110);
    return UNITY_END();
}

