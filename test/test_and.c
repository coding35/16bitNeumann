// test_and.c
#include "../unity/src/unity.h"
#include "../include/gates/and.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}
/*
    And Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 0 |
    | 1 | 0 | 0 |
    | 1 | 1 | 1 |
*/

void test_and_should_return_0_for_0_and_0(void) {
    TEST_ASSERT_EQUAL_UINT8(0, and(0, 0));
}

void test_and_should_return_0_for_0_and_1(void) {
    TEST_ASSERT_EQUAL_UINT8(0, and(0, 1));
}

void test_and_should_return_0_for_1_and_0(void) {
    TEST_ASSERT_EQUAL_UINT8(0, and(1, 0));
}

void test_and_should_return_1_for_1_and_1(void) {
    TEST_ASSERT_EQUAL_UINT8(1, and(1, 1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_and_should_return_0_for_0_and_0);
    RUN_TEST(test_and_should_return_0_for_0_and_1);
    RUN_TEST(test_and_should_return_0_for_1_and_0);
    RUN_TEST(test_and_should_return_1_for_1_and_1);
    return UNITY_END();
}