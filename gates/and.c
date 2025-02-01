// and.c
#include <stdint.h>

typedef uint8_t bit;

/*
    And Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 0 |
    | 1 | 0 | 0 |
    | 1 | 1 | 1 |
*/

bit and(bit a, bit b){
    return a & b;
}

