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

    HDL
    Or gate:
    if (a or b) out = 1, else out = 0

    CHIP Or {
            IN a, b;
            OUT out;

            PARTS:
            Nand(a=a,b=a,out=c);
            Nand(a=b,b=b,out=d);
            Nand(a=c,b=d,out=out);
    }
*/

bit or(bit a, bit b){
    return a | b;
}