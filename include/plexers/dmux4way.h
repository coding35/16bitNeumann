// dmux4way.h

#ifndef DMUX4WAY_H
#define DMUX4WAY_H

#include <stdint.h>

typedef uint8_t bit;

void dmux4way(bit in, bit sel[], bit* a, bit* b, bit* c, bit* d);

#endif DMUX4WAY_H
