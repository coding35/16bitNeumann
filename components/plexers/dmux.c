// dmux.h
#include <stdint.h>

typedef uint8_t bit;

/*

    Truth Table
    |in |sel| a | b |
    | 0 | 0 | 0 | 0 |
    | 0 | 1 | 0 | 0 |
    | 1 | 0 | 1 | 0 |
    | 1 | 1 | 0 | 1 |

    Demultiplexor:
    if (sel = 0) a, else b

    CHIP DMux {
        IN in, sel;
        OUT a, b;

        PARTS:
            Not(in=sel, out=nsel);
            And(a=in, b=nsel, out= a);
            And(a=in, b=sel, out= b);
    }
*/

void dmux(bit in, bit sel, bit *a, bit *b) {
    *a = in & !sel;
    *b = in & sel;
}




