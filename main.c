#include <stdio.h>
#include "include/gates/and.h"
#include "include/gates/not.h"
#include "include/gates/or.h"
#include "include/gates/xor.h"
#include "include/plexers/dmux.h"
#include "include/gates/not16.h"
#include <stdint.h>

typedef uint8_t bit;

int main(void) {
    printf("Hello, World!\n");

    bit a[15], b[15];

    for (int i = 0; i < 15; i++) {
        a[i] = 0;
    }

    not16(a, b);

    for (int i = 0; i < 15; i++) {
        printf("A: %d, Q: %d\n", a[i], b[i]);
    }

    return 0;
}
