// test_mux.c
#include "../unity/src/unity.h"
#include "../include/plexers/mux.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Mux Truth Table
    | A | B | Sel | Q |
    |---|---|-----|---|
    | 0 | 0 | 0   | 0 |
    | 0 | 1 | 0   | 0 |
    | 1 | 0 | 0   | 1 |
    | 1 | 1 | 0   | 1 |
    | 0 | 0 | 1   | 0 |
    | 0 | 1 | 1   | 1 |
    | 1 | 0 | 1   | 0 |
    | 1 | 1 | 1   | 1 |
*/

void test_mux_should_return_0_for_0_0_0(void) {
    TEST_ASSERT_EQUAL_UINT8(0, mux(0, 0, 0));
}

void test_mux_should_return_0_for_0_1_0(void) {
    TEST_ASSERT_EQUAL_UINT8(0, mux(0, 1, 0));
}

void test_mux_should_return_1_for_1_0_0(void) {
    TEST_ASSERT_EQUAL_UINT8(1, mux(1, 0, 0));
}

void test_mux_should_return_1_for_1_1_0(void) {
    TEST_ASSERT_EQUAL_UINT8(1, mux(1, 1, 0));
}

void test_mux_should_return_0_for_0_0_1(void) {
    TEST_ASSERT_EQUAL_UINT8(0, mux(0, 0, 1));
}

void test_mux_should_return_1_for_0_1_1(void) {
    TEST_ASSERT_EQUAL_UINT8(1, mux(0, 1, 1));
}

void test_mux_should_return_0_for_1_0_1(void) {
    TEST_ASSERT_EQUAL_UINT8(0, mux(1, 0, 1));
}

void test_mux_should_return_1_for_1_1_1(void) {
    TEST_ASSERT_EQUAL_UINT8(1, mux(1, 1, 1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_mux_should_return_0_for_0_0_0);
    RUN_TEST(test_mux_should_return_0_for_0_1_0);
    RUN_TEST(test_mux_should_return_1_for_1_0_0);
    RUN_TEST(test_mux_should_return_1_for_1_1_0);
    RUN_TEST(test_mux_should_return_0_for_0_0_1);
    RUN_TEST(test_mux_should_return_1_for_0_1_1);
    RUN_TEST(test_mux_should_return_0_for_1_0_1);
    RUN_TEST(test_mux_should_return_1_for_1_1_1);
    return UNITY_END();
}