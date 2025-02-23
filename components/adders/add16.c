// add16.c

#include <stdint.h>

#include "../../include/adders/halfadder.h"
#include "../../include/adders/fulladder.h"

typedef uint8_t bit;

/*
    16-bit Adder Truth
    |        a         |        b         |       out        |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 |
    | 0000000000000000 | 1111111111111111 | 1111111111111111 |
    | 1111111111111111 | 1111111111111111 | 1111111111111110 |
    | 1010101010101010 | 0101010101010101 | 1111111111111111 |
    | 0011110011000011 | 0000111111110000 | 0100110010110011 |
    | 0001001000110100 | 1001100001110110 | 1010101010101010 |

    CHIP Add16 {
        IN a[16], b[16];
        OUT out[16];

        PARTS:
        HalfAdder(a=a[0], b=b[0], sum=out[0], carry=c0);
        FullAdder(a=a[1], b=b[1] ,c=c0, sum=out[1], carry=c1);
        FullAdder(a=a[2], b=b[2] ,c=c1, sum=out[2], carry=c2);
        FullAdder(a=a[3], b=b[3] ,c=c2, sum=out[3], carry=c3);
        FullAdder(a=a[4], b=b[4] ,c=c3, sum=out[4], carry=c4);
        FullAdder(a=a[5], b=b[5] ,c=c4, sum=out[5], carry=c5);
        FullAdder(a=a[6], b=b[6] ,c=c5, sum=out[6], carry=c6);
        FullAdder(a=a[7], b=b[7] ,c=c6, sum=out[7], carry=c7);
        FullAdder(a=a[8], b=b[8] ,c=c7, sum=out[8], carry=c8);
        FullAdder(a=a[9], b=b[9] ,c=c8, sum=out[9], carry=c9);
        FullAdder(a=a[10], b=b[10] ,c=c9, sum=out[10], carry=c10);
        FullAdder(a=a[11], b=b[11] ,c=c10, sum=out[11], carry=c11);
        FullAdder(a=a[12], b=b[12] ,c=c11, sum=out[12], carry=c12);
        FullAdder(a=a[13], b=b[13] ,c=c12, sum=out[13], carry=c13);
        FullAdder(a=a[14], b=b[14] ,c=c13, sum=out[14], carry=c14);
        FullAdder(a=a[15], b=b[15] ,c=c14, sum=out[15], carry=c15);
}
 */

void add16(bit a[16], bit b[16], bit out[16]){
    bit c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15;
    halfadder(a[0], b[0], &out[0], &c0);
    fulladder(a[1], b[1], c0, &out[1], &c1);
    fulladder(a[2], b[2], c1, &out[2], &c2);
    fulladder(a[3], b[3], c2, &out[3], &c3);
    fulladder(a[4], b[4], c3, &out[4], &c4);
    fulladder(a[5], b[5], c4, &out[5], &c5);
    fulladder(a[6], b[6], c5, &out[6], &c6);
    fulladder(a[7], b[7], c6, &out[7], &c7);
    fulladder(a[8], b[8], c7, &out[8], &c8);
    fulladder(a[9], b[9], c8, &out[9], &c9);
    fulladder(a[10], b[10], c9, &out[10], &c10);
    fulladder(a[11], b[11], c10, &out[11], &c11);
    fulladder(a[12], b[12], c11, &out[12], &c12);
    fulladder(a[13], b[13], c12, &out[13], &c13);
    fulladder(a[14], b[14], c13, &out[14], &c14);
    fulladder(a[15], b[15], c14, &out[15], &c15);
}