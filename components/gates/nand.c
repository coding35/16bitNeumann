// nand.c

#include <stdint.h>
#include "../../include/gates/and.h"
#include "../../include/gates/not.h"

typedef uint8_t bit;

/*
    NAND Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 1 |
    | 0 | 1 | 1 |
    | 1 | 0 | 1 |
    | 1 | 1 | 0 |

    HDL

    NAND gate:
    if (a and b) out = 0, else out = 1

    CHIP Nand {
            IN a, b;
            OUT out;

            PARTS:
            And(a=a, b=b, out=out);
            Not(in=out, out=out);
    }
*/

bit nand(bit a, bit b){
    return !(a & b);
}