// not16.c
#include <stdint.h>
#include "../../include/gates/not.h"

typedef uint8_t bit;

/*
    Not16 Truth Table
    | A | Q |
    |---|---|
    | 0 | 1 |
    | 1 | 0 |

     16-bit Not gate:
     for i = 0, ..., 15:
     out[i] = Not(a[i])

    CHIP Not16 {
            IN in[16];
            OUT out[16];

            PARTS:
            Not(in=in[0] , out= out[0]);
            Not(in=in[1] , out= out[1]);
            Not(in=in[2] , out= out[2]);
            Not(in=in[3] , out= out[3]);
            Not(in=in[4] , out= out[4]);
            Not(in=in[5] , out= out[5]);
            Not(in=in[6] , out= out[6]);
            Not(in=in[7] , out= out[7]);
            Not(in=in[8] , out= out[8]);
            Not(in=in[9] , out= out[9]);
            Not(in=in[10] , out= out[10]);
            Not(in=in[11] , out= out[11]);
            Not(in=in[12] , out= out[12]);
            Not(in=in[13] , out= out[13]);
            Not(in=in[14] , out= out[14]);
            Not(in=in[15] , out= out[15]);
    }
*/


void not16(bit a[], bit out[]) {
    for (int i = 0; i < 16; i++) {
        out[i] = not(a[i]); // build on top of the not component
    }
}
