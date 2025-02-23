// and16.c
#include <stdint.h>
#include <stdlib.h>
#include "../../include/gates/and.h"

typedef uint8_t bit;

/*
    And16 Truth Table
    |        a         |        b         |       out        |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 |
    | 0000000000000000 | 1111111111111111 | 0000000000000000 |
    | 1111111111111111 | 1111111111111111 | 1111111111111111 |
    | 1010101010101010 | 0101010101010101 | 0000000000000000 |
    | 0011110011000011 | 0000111111110000 | 0000110011000000 |
    | 0001001000110100 | 1001100001110110 | 0001000000110100 |

    16-bit And gate:
    for i = 0, ..., 15:
    out[i] = a[i] And b[i]

    CHIP And16 {
            IN a[16], b[16];
            OUT out[16];

            PARTS:
            And(a=a[0], b=b[0], out=out[0]);
            And(a=a[1], b=b[1], out=out[1]);
            And(a=a[2], b=b[2], out=out[2]);
            And(a=a[3], b=b[3], out=out[3]);
            And(a=a[4], b=b[4], out=out[4]);
            And(a=a[5], b=b[5], out=out[5]);
            And(a=a[6], b=b[6], out=out[6]);
            And(a=a[7], b=b[7], out=out[7]);
            And(a=a[8], b=b[8], out=out[8]);
            And(a=a[9], b=b[9], out=out[9]);
            And(a=a[10], b=b[10], out=out[10]);
            And(a=a[11], b=b[11], out=out[11]);
            And(a=a[12], b=b[12], out=out[12]);
            And(a=a[13], b=b[13], out=out[13]);
            And(a=a[14], b=b[14], out=out[14]);
            And(a=a[15], b=b[15], out=out[15]);
    }

*/


bit* and16(bit a[], bit b[]) {
    bit* out = (bit*)malloc(16 * sizeof(bit));
    for (int i = 0; i < 16; i++) {
        out[i] = and(a[i], b[i]); // build on top of the and component
    }
    return out;
}