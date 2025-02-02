// test_not16.c

#include <stdlib.h>
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
    bit* out = not16(a);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(1, out[1]);
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
    TEST_ASSERT_EQUAL_UINT8(1, out[12]);
    TEST_ASSERT_EQUAL_UINT8(1, out[13]);
    TEST_ASSERT_EQUAL_UINT8(1, out[14]);
    TEST_ASSERT_EQUAL_UINT8(1, out[15]);
    free(out);
}

void test_not16_should_return_0000000000000000_for_1111111111111111(void) {
    bit a[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
    bit* out = not16(a);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(0, out[3]);
    TEST_ASSERT_EQUAL_UINT8(0, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
    TEST_ASSERT_EQUAL_UINT8(0, out[7]);
    TEST_ASSERT_EQUAL_UINT8(0, out[8]);
    TEST_ASSERT_EQUAL_UINT8(0, out[9]);
    TEST_ASSERT_EQUAL_UINT8(0, out[10]);
    TEST_ASSERT_EQUAL_UINT8(0, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(0, out[13]);
    TEST_ASSERT_EQUAL_UINT8(0, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

void test_not16_should_return_0101010101010101_for_1010101010101010(void) {
    bit a[16] = { 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
    bit* out = not16(a);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(1, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(0, out[4]);
    TEST_ASSERT_EQUAL_UINT8(1, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
    TEST_ASSERT_EQUAL_UINT8(1, out[7]);
    TEST_ASSERT_EQUAL_UINT8(0, out[8]);
    TEST_ASSERT_EQUAL_UINT8(1, out[9]);
    TEST_ASSERT_EQUAL_UINT8(0, out[10]);
    TEST_ASSERT_EQUAL_UINT8(1, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(1, out[13]);
    TEST_ASSERT_EQUAL_UINT8(0, out[14]);
    TEST_ASSERT_EQUAL_UINT8(1, out[15]);
    free(out);
}

void test_not16_should_return_1100001100111100_for_0011110011000011(void) {
    bit a[16] = { 0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1 };
    bit* out = not16(a);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(1, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(0, out[3]);
    TEST_ASSERT_EQUAL_UINT8(0, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(1, out[6]);
    TEST_ASSERT_EQUAL_UINT8(1, out[7]);
    TEST_ASSERT_EQUAL_UINT8(0, out[8]);
    TEST_ASSERT_EQUAL_UINT8(0, out[9]);
    TEST_ASSERT_EQUAL_UINT8(1, out[10]);
    TEST_ASSERT_EQUAL_UINT8(1, out[11]);
    TEST_ASSERT_EQUAL_UINT8(1, out[12]);
    TEST_ASSERT_EQUAL_UINT8(1, out[13]);
    TEST_ASSERT_EQUAL_UINT8(0, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

void test_not16_should_return_1110110111001011_for_0001001000110100(void) {
    bit a[16] = { 0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0 };
    bit* out = not16(a);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(1, out[1]);
    TEST_ASSERT_EQUAL_UINT8(1, out[2]);
    TEST_ASSERT_EQUAL_UINT8(0, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(1, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
    TEST_ASSERT_EQUAL_UINT8(1, out[7]);
    TEST_ASSERT_EQUAL_UINT8(1, out[8]);
    TEST_ASSERT_EQUAL_UINT8(1, out[9]);
    TEST_ASSERT_EQUAL_UINT8(0, out[10]);
    TEST_ASSERT_EQUAL_UINT8(0, out[11]);
    TEST_ASSERT_EQUAL_UINT8(1, out[12]);
    TEST_ASSERT_EQUAL_UINT8(0, out[13]);
    TEST_ASSERT_EQUAL_UINT8(1, out[14]);
    TEST_ASSERT_EQUAL_UINT8(1, out[15]);
    free(out);
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




