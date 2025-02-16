// dmux8way.h

#ifndef DMUX8WAY_H
#define DMUX8WAY_H

#include <stdint.h>

typedef uint8_t bit;

void dmux8way(bit in, bit sel[], bit *a, bit *b, bit *c, bit *d, bit *e, bit *f, bit *g, bit *h);

#endif //DMUX8WAY_H