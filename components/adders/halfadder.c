// halfadder.c

#include <stdint.h>
#include "../../include/gates/xor.h"
#include "../../include/gates/and.h"


typedef uint8_t bit;

/*
    Half Adder Truth Table
    | A | B | Sum | Carry |
    |---|---|-----|-------|
    | 0 | 0 | 0   | 0     |
    | 0 | 1 | 1   | 0     |
    | 1 | 0 | 1   | 0     |
    | 1 | 1 | 0   | 1     |

    HDL
    Half Adder:
    Sum = A xor B
    Carry = A and B

    CHIP HalfAdder {
            IN a, b;
            OUT sum, carry;

            PARTS:
            Xor(a=a,b=b,out=sum);
            And(a=a,b=b,out=carry);
    }
*/

void halfadder(bit a, bit b, bit *sum, bit *carry){
    *sum = xor(a, b);
    *carry = and(a, b);
}

