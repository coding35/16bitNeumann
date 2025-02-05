// and.c
#include <stdint.h>
#include "../../include/gates/nand.h"

typedef uint8_t bit;

/*
    And Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 0 |
    | 1 | 0 | 0 |
    | 1 | 1 | 1 |

    HDL
    And gate:
    if (a and b) out = 1, else out = 0

    CHIP And {
            IN a, b;
            OUT out;

            PARTS:
            Nand(a=a,b=b,out=c);
            Nand(a=c,b=c,out=out);
    }
*/

bit and(bit a, bit b){
    bit c = nand(a, b);
    return nand(c, c);
}

