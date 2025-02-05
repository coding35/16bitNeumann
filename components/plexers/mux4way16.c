// mux4way16.c

#include <stdint.h>
#include <stdlib.h>
#include "../../include/plexers/mux16.h"

typedef uint8_t bit;

/*
    4-way 16-bit Multiplexor:
    |        a         |        b         |        c         |        d         | sel  |       out        |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 | 0000000000000000 |  00  | 0000000000000000 |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 | 0000000000000000 |  01  | 0000000000000000 |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 | 0000000000000000 |  10  | 0000000000000000 |
    | 0000000000000000 | 0000000000000000 | 0000000000000000 | 0000000000000000 |  11  | 0000000000000000 |
    | 0001001000110100 | 1001100001110110 | 1010101010101010 | 0101010101010101 |  00  | 0001001000110100 |
    | 0001001000110100 | 1001100001110110 | 1010101010101010 | 0101010101010101 |  01  | 1001100001110110 |
    | 0001001000110100 | 1001100001110110 | 1010101010101010 | 0101010101010101 |  10  | 1010101010101010 |
    | 0001001000110100 | 1001100001110110 | 1010101010101010 | 0101010101010101 |  11  | 0101010101010101 |

    4-way 16-bit multiplexor:
     out = a if sel = 00
            b if sel = 01
            c if sel = 10
            d if sel = 11

    CHIP Mux4Way16 {
            IN a[16], b[16], c[16], d[16], sel[2];
            OUT out[16];

            PARTS:
            Mux16(a=a,b=b,sel=sel[0],out=q);
            Mux16(a=c,b=d,sel=sel[0],out=r);
            Mux16(a=q,b=r,sel=sel[1],out=out);
    }

 */

bit* mux4way16(bit a[], bit b[], bit c[], bit d[], bit sel[]) {
    bit* out = (bit*)malloc(16 * sizeof(bit));
    if (out == NULL) {
        // Handle memory allocation failure
        return NULL;
    }
    bit* q = mux16(a, b, sel[0]);
    bit* r = mux16(c, d, sel[0]);
    bit* temp = mux16(q, r, sel[1]);

    for (int i = 0; i < 16; i++) {
        out[i] = temp[i];
    }

    free(q);
    free(r);
    free(temp);
    return out;
}