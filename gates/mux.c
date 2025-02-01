// mux.h
#include <stdint.h>

typedef uint8_t bit;

/*
    Mux Truth Table
    | A | B | Sel | Q |
    |---|---|-----|---|
    | 0 | 0 | 0   | 0 |
    | 0 | 1 | 0   | 0 |
    | 1 | 0 | 0   | 1 |
    | 1 | 1 | 0   | 1 |
    | 0 | 0 | 1   | 0 |
    | 0 | 1 | 1   | 1 |
    | 1 | 0 | 1   | 0 |
    | 1 | 1 | 1   | 1 |

    HDL

    Multiplexor:
    if (sel = 0) out = a, else out = b

    CHIP Mux {
            IN a, b, sel;
            OUT out;

            PARTS:
            Not(in=sel, out=nsel);
            And(a=a, b=nsel, out=c);
            And(a=b, b=sel, out=d);
            Or(a=c, b=d, out=out);

    }
 */


bit mux(bit a, bit b, bit sel){
    return (a & !sel) | (b & sel);
}

