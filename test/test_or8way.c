// test_or8way.c
#include "../unity/src/unity.h"
#include "../include/gates/or8way.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
  Or8Way Truth Table
    |     in     |out|
    |  00000000  | 0 |
    |  11111111  | 1 |
    |  00010000  | 1 |
    |  00000001  | 1 |
    |  00100110  | 1 |

 */

void test_or8way_should_return_0_for_00000000(void) {
    bit in[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    TEST_ASSERT_EQUAL_UINT8(0, or8way(in));
}

void test_or8way_should_return_1_for_11111111(void) {
    bit in[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    TEST_ASSERT_EQUAL_UINT8(1, or8way(in));
}

void test_or8way_should_return_1_for_00010000(void) {
    bit in[8] = {0, 0, 0, 1, 0, 0, 0, 0};
    TEST_ASSERT_EQUAL_UINT8(1, or8way(in));
}

void test_or8way_should_return_1_for_00000001(void) {
    bit in[8] = {0, 0, 0, 0, 0, 0, 0, 1};
    TEST_ASSERT_EQUAL_UINT8(1, or8way(in));
}

void test_or8way_should_return_1_for_00100110(void) {
    bit in[8] = {0, 0, 1, 0, 0, 1, 1, 0};
    TEST_ASSERT_EQUAL_UINT8(1, or8way(in));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_or8way_should_return_0_for_00000000);
    RUN_TEST(test_or8way_should_return_1_for_11111111);
    RUN_TEST(test_or8way_should_return_1_for_00010000);
    RUN_TEST(test_or8way_should_return_1_for_00000001);
    RUN_TEST(test_or8way_should_return_1_for_00100110);
    return UNITY_END();
}
