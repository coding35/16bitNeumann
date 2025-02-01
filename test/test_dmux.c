// test_dmux.c

#include "../unity/src/unity.h"
#include "../include/plexers/dmux.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

/*
    Truth Table
    |in |sel| a | b |
    | 0 | 0 | 0 | 0 |
    | 0 | 1 | 0 | 0 |
    | 1 | 0 | 1 | 0 |
    | 1 | 1 | 0 | 1 |
*/

void test_dmux() {
    bit a, b;

    dmux(0, 0, &a, &b);
    TEST_ASSERT_EQUAL(0, a);
    TEST_ASSERT_EQUAL(0, b);

    dmux(0, 1, &a, &b);
    TEST_ASSERT_EQUAL(0, a);
    TEST_ASSERT_EQUAL(0, b);

    dmux(1, 0, &a, &b);
    TEST_ASSERT_EQUAL(1, a);
    TEST_ASSERT_EQUAL(0, b);

    dmux(1, 1, &a, &b);
    TEST_ASSERT_EQUAL(0, a);
    TEST_ASSERT_EQUAL(1, b);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_dmux);
    return UNITY_END();
}




// test_dmux.c