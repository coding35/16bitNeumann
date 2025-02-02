// mux4way16.h
#ifndef MUX4WAY16_H
#define MUX4WAY16_H

#include <stdint.h>

typedef uint8_t bit;

bit* mux4way16(bit a[], bit b[], bit c[], bit d[], bit sel[]);

#endif //MUX4WAY16_H
