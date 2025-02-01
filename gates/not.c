// not.c
#include <stdint.h>

typedef uint8_t bit;

/*
     Not Truth Table
     | A | Q |
     |---|---|
     | 0 | 1 |
     | 1 | 0 |
 */

bit not(bit a) {
    return !a;
}