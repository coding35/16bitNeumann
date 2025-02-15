// dmux4way.c

#include <stdint.h>
#include "../../include/plexers/dmux.h"

typedef uint8_t bit;

/*
    4-way 16-bit Demultiplexor:
    |in | sel  | a | b | c | d |
    | 0 |  00  | 0 | 0 | 0 | 0 |
    | 0 |  01  | 0 | 0 | 0 | 0 |
    | 0 |  10  | 0 | 0 | 0 | 0 |
    | 0 |  11  | 0 | 0 | 0 | 0 |
    | 1 |  00  | 1 | 0 | 0 | 0 |
    | 1 |  01  | 0 | 1 | 0 | 0 |
    | 1 |  10  | 0 | 0 | 1 | 0 |
    | 1 |  11  | 0 | 0 | 0 | 1 |

    a = in if sel = 00
    b = in if sel = 01
    c = in if sel = 10
    d = in if sel = 11

    CHIP DMux4Way {
            IN in, sel[2];
            OUT a, b, c, d;

            PARTS:
            DMux(in=in, sel=sel[1], a=x, b=y);
            DMux(in=x, sel=sel[0], a=a, b=b);
            DMux(in=y, sel=sel[0], a=c, b=d);
    }
*/


void dmux4way(bit in, bit sel[], bit* a, bit* b, bit* c, bit* d) {
    bit ao, bo; // intermediate variables, output of the first dmux operation will be stored here
    dmux(in, sel[1], &ao, &bo);
    dmux(ao, sel[0], a, b);
    dmux(bo, sel[0], c, d);
}

