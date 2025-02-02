#include <stdio.h>
#include "include/gates/and.h"
#include "include/gates/not.h"
#include "include/gates/or.h"
#include "include/gates/xor.h"
#include "include/plexers/dmux.h"
#include "include/gates/not16.h"
#include "include/gates/and16.h"
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t bit;

int main(void) {
    printf("Hello, World!\n");

    bit a[16] = {0};
    bit b[16] = {0};

    a[3] = 1;
    b[3] = 1;

    bit* out = and16(a, b);

    for (int i = 0; i < 16; i++) {
        printf("%d", out[i]);
    }
    printf("\n");

    free(out);

    return 0;
}
