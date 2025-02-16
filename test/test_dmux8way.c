// test_dmux8way.c

#include "../unity/src/unity.h"
#include "../include/plexers/dmux8way.h"
#include <stdlib.h>

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    8-way 16-bit Multiplexor:
    |in |  sel  | a | b | c | d | e | f | g | h |
    | 0 |  000  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  001  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  010  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  011  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  100  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  101  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  110  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 0 |  111  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 1 |  000  | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 1 |  001  | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
    | 1 |  010  | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 |
    | 1 |  011  | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 |
    | 1 |  100  | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 |
    | 1 |  101  | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |
    | 1 |  110  | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 |
    | 1 |  111  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
 */

void test_dmux8way_should_return_00000000_for_0_000(void) {
    bit in = 0;
    bit sel[] = {0, 0, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_001(void) {
    bit in = 0;
    bit sel[] = {0, 0, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_010(void) {
    bit in = 0;
    bit sel[] = {0, 1, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_011(void) {
    bit in = 0;
    bit sel[] = {0, 1, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_100(void) {
    bit in = 0;
    bit sel[] = {1, 0, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_101(void) {
    bit in = 0;
    bit sel[] = {1, 0, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_110(void) {
    bit in = 0;
    bit sel[] = {1, 1, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000000_for_0_111(void) {
    bit in = 0;
    bit sel[] = {1, 1, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_10000000_for_1_000(void) {
    bit in = 1;
    bit sel[] = {0, 0, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(1, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_01000000_for_1_001(void) {
    bit in = 1;
    bit sel[] = {1, 0, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(1, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00100000_for_1_010(void) {
    bit in = 1;
    bit sel[] = {0, 1, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(1, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00010000_for_1_011(void) {
    bit in = 1;
    bit sel[] = {1, 1, 0};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(1, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00001000_for_1_100(void) {
    bit in = 1;
    bit sel[] = {0, 0, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(1, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000100_for_1_101(void) {
    bit in = 1;
    bit sel[] = {1, 0, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(1, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000010_for_1_110(void) {
    bit in = 1;
    bit sel[] = {0, 1, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(1, g);
    TEST_ASSERT_EQUAL_UINT8(0, h);
}

void test_dmux8way_should_return_00000001_for_1_111(void) {
    bit in = 1;
    bit sel[] = {1, 1, 1};
    bit a, b, c, d, e, f, g, h;
    dmux8way(in, sel, &a, &b, &c, &d, &e, &f, &g, &h);
    TEST_ASSERT_EQUAL_UINT8(0, a);
    TEST_ASSERT_EQUAL_UINT8(0, b);
    TEST_ASSERT_EQUAL_UINT8(0, c);
    TEST_ASSERT_EQUAL_UINT8(0, d);
    TEST_ASSERT_EQUAL_UINT8(0, e);
    TEST_ASSERT_EQUAL_UINT8(0, f);
    TEST_ASSERT_EQUAL_UINT8(0, g);
    TEST_ASSERT_EQUAL_UINT8(1, h);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_000);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_001);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_010);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_011);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_100);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_101);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_110);
    RUN_TEST(test_dmux8way_should_return_00000000_for_0_111);
    RUN_TEST(test_dmux8way_should_return_10000000_for_1_000);
    RUN_TEST(test_dmux8way_should_return_01000000_for_1_001);
    RUN_TEST(test_dmux8way_should_return_00100000_for_1_010);
    RUN_TEST(test_dmux8way_should_return_00010000_for_1_011);
    RUN_TEST(test_dmux8way_should_return_00001000_for_1_100);
    RUN_TEST(test_dmux8way_should_return_00000100_for_1_101);
    RUN_TEST(test_dmux8way_should_return_00000010_for_1_110);
    RUN_TEST(test_dmux8way_should_return_00000001_for_1_111);
    return UNITY_END();
}




