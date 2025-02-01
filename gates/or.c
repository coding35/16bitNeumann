// or.c
#include <stdint.h>

typedef uint8_t bit;

/*
    Or Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 1 |
    | 1 | 0 | 1 |
    | 1 | 1 | 1 |
*/

bit or(bit a, bit b){
    return a | b;
}