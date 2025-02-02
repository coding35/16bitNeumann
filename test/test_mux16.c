// test_mux16.c
#include "../unity/src/unity.h"
#include "../include/plexers/mux16.h"
#include <stdlib.h>

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Mux16 Truth Table
    |        a         |        b         |sel|       out        |
    | 0000000000000000 | 0000000000000000 | 0 | 0000000000000000 |
    | 0000000000000000 | 0000000000000000 | 1 | 0000000000000000 |
    | 0000000000000000 | 0001001000110100 | 0 | 0000000000000000 |
    | 0000000000000000 | 0001001000110100 | 1 | 0001001000110100 |
    | 1001100001110110 | 0000000000000000 | 0 | 1001100001110110 |
    | 1001100001110110 | 0000000000000000 | 1 | 0000000000000000 |
    | 1010101010101010 | 0101010101010101 | 0 | 1010101010101010 |
    | 1010101010101010 | 0101010101010101 | 1 | 0101010101010101 |

    HDL
    16-bit multiplexor:
    for i = 0, ..., 15:
    if (sel = 0) out[i] = a[i], else out[i] = b[i]

    CHIP Mux16 {
            IN a[16], b[16], sel;
            OUT out[16];

            PARTS:
            Mux(a=a[0], b=b[0], sel=sel, out=out[0]);
            Mux(a=a[1], b=b[1], sel=sel, out=out[1]);
            Mux(a=a[2], b=b[2], sel=sel, out=out[2]);
            Mux(a=a[3], b=b[3], sel=sel, out=out[3]);
            Mux(a=a[4], b=b[4], sel=sel, out=out[4]);
            Mux(a=a[5], b=b[5], sel=sel, out=out[5]);
            Mux(a=a[6], b=b[6], sel=sel, out=out[6]);
            Mux(a=a[7], b=b[7], sel=sel, out=out[7]);
            Mux(a=a[8], b=b[8], sel=sel, out=out[8]);
            Mux(a=a[9], b=b[9], sel=sel, out=out[9]);
            Mux(a=a[10], b=b[10], sel=sel, out=out[10]);
            Mux(a=a[11], b=b[11], sel=sel, out=out[11]);
            Mux(a=a[12], b=b[12], sel=sel, out=out[12]);
            Mux(a=a[13], b=b[13], sel=sel, out=out[13]);
            Mux(a=a[14], b=b[14], sel=sel, out=out[14]);
            Mux(a=a[15], b=b[15], sel=sel, out=out[15]);
    }
*/

void test_mux16_should_return_0000000000000000_for_0000000000000000_0000000000000000_0(void) {
    bit a[16] = {0}, b[16] = {0};
    bit* out = mux16(a, b, 0);
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

void test_mux16_should_return_0000000000000000_for_0000000000000000_0000000000000000_1(void) {
    bit a[16] = {0}, b[16] = {0};
    bit* out = mux16(a, b, 1);
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

void test_mux16_should_return_0000000000000000_for_0000000000000000_0001001000110100_0(void) {
    bit a[16] = {0};
    bit b[16] = {0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0};
    bit* out = mux16(a, b, 0);
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

void test_mux16_should_return_0001001000110100_for_0000000000000000_0001001000110100_1(void) {
    bit a[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    bit b[16] = {0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0};
    bit* out = mux16(a, b, 1);
    TEST_ASSERT_EQUAL_UINT8(0, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(0, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(1, out[6]);
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

void test_mux16_should_return_1001100001110110_for_1001100001110110_0000000000000000_0(void) {
    bit a[16] = {1,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0};
    bit b[16] = {0};
    bit* out = mux16(a, b, 0);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(0, out[2]);
    TEST_ASSERT_EQUAL_UINT8(1, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(0, out[6]);
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

void test_mux16_should_return_0000000000000000_for_1001100001110110_0000000000000000_1(void) {
    bit a[16] = {1,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0};
    bit b[16] = {0};
    bit* out = mux16(a, b, 1);
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

void test_mux16_should_return_1010101010101010_for_1010101010101010_0101010101010101_0(void) {
    bit a[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    bit b[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    bit* out = mux16(a, b, 0);
    TEST_ASSERT_EQUAL_UINT8(1, out[0]);
    TEST_ASSERT_EQUAL_UINT8(0, out[1]);
    TEST_ASSERT_EQUAL_UINT8(1, out[2]);
    TEST_ASSERT_EQUAL_UINT8(0, out[3]);
    TEST_ASSERT_EQUAL_UINT8(1, out[4]);
    TEST_ASSERT_EQUAL_UINT8(0, out[5]);
    TEST_ASSERT_EQUAL_UINT8(1, out[6]);
    TEST_ASSERT_EQUAL_UINT8(0, out[7]);
    TEST_ASSERT_EQUAL_UINT8(1, out[8]);
    TEST_ASSERT_EQUAL_UINT8(0, out[9]);
    TEST_ASSERT_EQUAL_UINT8(1, out[10]);
    TEST_ASSERT_EQUAL_UINT8(0, out[11]);
    TEST_ASSERT_EQUAL_UINT8(1, out[12]);
    TEST_ASSERT_EQUAL_UINT8(0, out[13]);
    TEST_ASSERT_EQUAL_UINT8(1, out[14]);
    TEST_ASSERT_EQUAL_UINT8(0, out[15]);
    free(out);
}

void test_mux16_should_return_0101010101010101_for_1010101010101010_0101010101010101_1(void) {
    bit a[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    bit b[16] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    bit* out = mux16(a, b, 1);
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

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_mux16_should_return_0000000000000000_for_0000000000000000_0000000000000000_0);
    RUN_TEST(test_mux16_should_return_0000000000000000_for_0000000000000000_0000000000000000_1);
    RUN_TEST(test_mux16_should_return_0000000000000000_for_0000000000000000_0001001000110100_0);
    RUN_TEST(test_mux16_should_return_0001001000110100_for_0000000000000000_0001001000110100_1);
    RUN_TEST(test_mux16_should_return_1001100001110110_for_1001100001110110_0000000000000000_0);
    RUN_TEST(test_mux16_should_return_0000000000000000_for_1001100001110110_0000000000000000_1);
    RUN_TEST(test_mux16_should_return_1010101010101010_for_1010101010101010_0101010101010101_0);
    RUN_TEST(test_mux16_should_return_0101010101010101_for_1010101010101010_0101010101010101_1);
    return UNITY_END();
}