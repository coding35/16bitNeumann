// dmux.h
#ifndef DMUX_H
#define DMUX_H

#include <stdint.h>

typedef uint8_t bit;

void dmux(bit in, bit sel, bit *a, bit *b);

#endif //DMUX_H
