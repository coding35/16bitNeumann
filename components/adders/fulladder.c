// fulladder.c

#include <stdint.h>
#include "../../include/adders/halfadder.h"
#include "../../include/gates/or.h"

typedef uint8_t bit;



/*
    Full Adder Truth Table
    | a | b | c |sum|carry|
    | 0 | 0 | 0 | 0 |  0  |
    | 0 | 0 | 1 | 1 |  0  |
    | 0 | 1 | 0 | 1 |  0  |
    | 0 | 1 | 1 | 0 |  1  |
    | 1 | 0 | 0 | 1 |  0  |
    | 1 | 0 | 1 | 0 |  1  |
    | 1 | 1 | 0 | 0 |  1  |
    | 1 | 1 | 1 | 1 |  1  |

    CHIP FullAdder {
        IN a, b, c;  // 1-bit inputs
        OUT sum,     // Right bit of a + b + c
            carry;   // Left bit of a + b + c

        PARTS:
        HalfAdder(a=a, b=b, sum=sa , carry=ca );
        HalfAdder(a=c, b=sa, sum=sum , carry=co );
        Or(a=ca, b=co, out=carry);
}
*/

void fulladder(bit a, bit b, bit c, bit *sum, bit *carry){
    bit sa, ca, co;
    halfadder(a, b, &sa, &ca);
    halfadder(c, sa, sum, &co);
    *carry = or(ca, co);
}
