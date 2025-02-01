// xor.c
#include <stdint.h>

typedef uint8_t bit;

/*
    XOR Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 1 |
    | 1 | 0 | 1 |
    | 1 | 1 | 0 |

    HDL
    Xor gate:
    if (a xor b) out = 1, else out = 0

    CHIP Xor {
            IN a, b;
            OUT out;

            PARTS:
            Not(in=a, out=nota);
            Not(in=b, out=notb);
            And(a=a, b=notb, out=outa);
            And(a=nota, b=b, out=outb );
            Or(a=outa, b=outb, out=out);
    }
*/

bit xor(bit a, bit b){
    return a ^ b; // bitwise or operator
}