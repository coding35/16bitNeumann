// test_not.c
#include "../unity/src/unity.h"
#include "../include/not.h"

/*
     Not Truth Table
     | A | Q |
     |---|---|
     | 0 | 1 |
     | 1 | 0 |
 */

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

void test_not_should_return_1_for_0(void) {
    TEST_ASSERT_EQUAL_UINT8(1, not(0));
}

void test_not_should_return_0_for_1(void) {
    TEST_ASSERT_EQUAL_UINT8(0, not(1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_not_should_return_1_for_0);
    RUN_TEST(test_not_should_return_0_for_1);
    return UNITY_END();
}