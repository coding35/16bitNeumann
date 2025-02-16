// dmux8way.c

#include <stdint.h>
#include <stdio.h>
#include "../../include/plexers/dmux.h"

typedef uint8_t bit;

/*
    8-way demultiplexor:
    [a, b, c, d, e, f, g, h] = [in, 0,  0,  0,  0,  0,  0,  0] if sel = 000
                               [0, in,  0,  0,  0,  0,  0,  0] if sel = 001
                               [0,  0, in,  0,  0,  0,  0,  0] if sel = 010
                               [0,  0,  0, in,  0,  0,  0,  0] if sel = 011
                               [0,  0,  0,  0, in,  0,  0,  0] if sel = 100
                               [0,  0,  0,  0,  0, in,  0,  0] if sel = 101
                               [0,  0,  0,  0,  0,  0, in,  0] if sel = 110
                               [0,  0,  0,  0,  0,  0,  0, in] if sel = 111
    CHIP DMux8Way {
        IN in, sel[3];
        OUT a, b, c, d, e, f, g, h;

        PARTS:
        DMux(in=in,sel=sel[2],a=ao,b=bo);

        DMux(in=ao,sel=sel[1],a=aoo,b=boo);
        DMux(in=bo,sel=sel[1],a=coo,b=doo);

        DMux(in=aoo,sel=sel[0],a=a,b=b);
        DMux(in=boo,sel=sel[0],a=c,b=d);
        DMux(in=coo,sel=sel[0],a=e,b=f);
        DMux(in=doo,sel=sel[0],a=g,b=h);
 */

void dmux8way(bit in, bit sel[], bit *a, bit *b, bit *c, bit *d, bit *e, bit *f, bit *g, bit *h) {
    bit ao = 0, bo = 0;
    bit aoo = 0, boo = 0, coo = 0, doo = 0;
    dmux(in, sel[2], &ao, &bo);
    dmux(ao, sel[1], &aoo, &boo);
    dmux(bo, sel[1], &coo, &doo);
    dmux(aoo, sel[0], a, b);
    dmux(boo, sel[0], c, d);
    dmux(coo, sel[0], e, f);
    dmux(doo, sel[0], g, h);
}