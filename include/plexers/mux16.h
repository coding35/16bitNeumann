// mux16.h
#ifndef MUX16_H
#define MUX16_H

#include <stdint.h>

typedef uint8_t bit;

bit* mux16(bit a[16], bit b[16], bit sel);

#endif //MUX16_H
