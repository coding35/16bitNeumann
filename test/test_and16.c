// test_and16.c

#include "../unity/src/unity.h"
#include "stdlib.h"
#include "../include/gates/and16.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    And16 Truth Table
    |        a         |        b         |       out        |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 |
    | 0000000000000000 | 1111111111111111 | 0000000000000000 |
    | 1111111111111111 | 1111111111111111 | 1111111111111111 |
    | 1010101010101010 | 0101010101010101 | 0000000000000000 |
    | 0011110011000011 | 0000111111110000 | 0000110011000000 |
    | 0001001000110100 | 1001100001110110 | 0001000000110100 |


16-bit And gate:
for i = 0, ..., 15:
out[i] = a[i] And b[i]
CHIP And16 {
        IN a[16], b[16];
        OUT out[16];

        PARTS:
        And(a=a[0], b=b[0], out=out[0]);
        And(a=a[1], b=b[1], out=out[1]);
        And(a=a[2], b=b[2], out=out[2]);
        And(a=a[3], b=b[3], out=out[3]);
        And(a=a[4], b=b[4], out=out[4]);
        And(a=a[5], b=b[5], out=out[5]);
        And(a=a[6], b=b[6], out=out[6]);
        And(a=a[7], b=b[7], out=out[7]);
        And(a=a[8], b=b[8], out=out[8]);
        And(a=a[9], b=b[9], out=out[9]);
        And(a=a[10], b=b[10], out=out[10]);
        And(a=a[11], b=b[11], out=out[11]);
        And(a=a[12], b=b[12], out=out[12]);
        And(a=a[13], b=b[13], out=out[13]);
        And(a=a[14], b=b[14], out=out[14]);
        And(a=a[15], b=b[15], out=out[15]);
}
*/

void test_and16_should_return_0000000000000000_for_0000000000000000_0000000000000000(void) {
    bit a[16] = {0}, b[16] = {0};
    bit* out = and16(a, b);
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

void test_and16_should_return_0000000000000000_for_0000000000000000_1111111111111111(void) {
    bit a[16] = {0}, b[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
    bit* out = and16(a, b);
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

void test_and16_should_return_1111111111111111_for_1111111111111111_1111111111111111(void) {
    bit a[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    bit b[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    bit *out = and16(a, b);
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

void test_and16_should_return_0000000000000000_for_1010101010101010_0101010101010101(void) {
    bit a[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    bit b[16] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    bit* out = and16(a, b);
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

void test_and16_should_return_0000110011000000_for_0011110011000011_0000111111110000(void) {
    bit a[16] = {0,0,1,1,1,1,0,0,1,1,0,0,0,0,1,1};
    bit b[16] = {0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0};
    bit* out = and16(a, b);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(0, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(1, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
    TEST_ASSERT_EQUAL_UINT8(0, out[7]);
    TEST_ASSERT_EQUAL_UINT8(1, out[8]);
    TEST_ASSERT_EQUAL_UINT8(1, out[9]);
    TEST_ASSERT_EQUAL_UINT8(0, out[10]);
    TEST_ASSERT_EQUAL_UINT8(0, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(0, out[13]);
    TEST_ASSERT_EQUAL_UINT8(0, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

void test_and16_should_return_0001000000110100_for_0001001000110100_1001100001110110(void) {
    bit a[16] = {0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0};
    bit b[16] = {1,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0};
    bit* out = and16(a, b);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(0, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
    TEST_ASSERT_EQUAL_UINT8(0, out[7]);
    TEST_ASSERT_EQUAL_UINT8(0, out[8]);
    TEST_ASSERT_EQUAL_UINT8(0, out[9]);
    TEST_ASSERT_EQUAL_UINT8(1, out[10]);
    TEST_ASSERT_EQUAL_UINT8(1, out[11]);
    TEST_ASSERT_EQUAL_UINT8(0, out[12]);
    TEST_ASSERT_EQUAL_UINT8(1, out[13]);
    TEST_ASSERT_EQUAL_UINT8(0, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_and16_should_return_0000000000000000_for_0000000000000000_0000000000000000);
    RUN_TEST(test_and16_should_return_0000000000000000_for_0000000000000000_1111111111111111);
    RUN_TEST(test_and16_should_return_1111111111111111_for_1111111111111111_1111111111111111);
    RUN_TEST(test_and16_should_return_0000000000000000_for_1010101010101010_0101010101010101);
    RUN_TEST(test_and16_should_return_0000110011000000_for_0011110011000011_0000111111110000);
    RUN_TEST(test_and16_should_return_0001000000110100_for_0001001000110100_1001100001110110);
    return UNITY_END();
}









