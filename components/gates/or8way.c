// or8way.c

#include <stdint.h>
#include "../../include/gates/or.h"

typedef uint8_t bit;

/*
  Or8Way Truth Table
    |     in     |out|
    |  00000000  | 0 |
    |  11111111  | 1 |
    |  00010000  | 1 |
    |  00000001  | 1 |
    |  00100110  | 1 |

    8-way Or gate:
    out = in[0] Or in[1] Or ... Or in[7]

    CHIP Or8Way {
        IN in[8];
        OUT out;

        PARTS:
        Or(a=in[0],b=in[1],out=a);
        Or(a=a,b=in[2],out=b);
        Or(a=b,b=in[3],out=c);
        Or(a=c,b=in[4],out=d);
        Or(a=d,b=in[5],out=e);
        Or(a=e,b=in[6],out=f);
        Or(a=f,b=in[7],out=out);
    }
 */

// 8-way Or gate constructed from 7 2-way Or gate components
bit or8way(bit in[]){
    bit a = or(in[0], in[1]);
    bit b = or(a, in[2]);
    bit c = or(b, in[3]);
    bit d = or(c, in[4]);
    bit e = or(d, in[5]);
    bit f = or(e, in[6]);
    return or(f, in[7]);
}