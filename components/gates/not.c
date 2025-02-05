// not.c
#include <stdint.h>
#include "../../include/gates/nand.h"

typedef uint8_t bit;

/*
     Not Truth Table
     | A | Q |
     |---|---|
     | 0 | 1 |
     | 1 | 0 |

    HDL
    Not gate:
    if (a) out = 0, else out = 1

    CHIP Not {
        IN in;
        OUT out;

        PARTS:
        Nand(a=in, b=in, out=out);
    }

 */

bit not(bit a) {
    bit out = nand(a, a);
    return out;
}