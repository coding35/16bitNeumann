#include <stdio.h>
#include "include/gates/and.h"
#include "include/gates/not.h"
#include "include/gates/or.h"
#include "include/gates/xor.h"
#include "include/plexers/dmux.h"
#include "include/gates/not16.h"
#include "include/gates/and16.h"
#include <stdint.h>

typedef uint8_t bit;

int main(void) {
    printf("Hello, World!\n");

    bit a[16], b[16], out[16];

    for (int i = 0; i < 16; i++) {
        a[i] = 0;
    }

    not16(a, out);

    for (int i = 0; i < 16; i++) {
        printf("A: %d, Q: %d\n", a[i], out[i]);
    }

    return 0;
}
