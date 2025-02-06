#include <stdio.h>
#include "include/gates/and.h"
#include "include/gates/not.h"
#include "include/gates/or.h"
#include "include/gates/xor.h"
#include "include/plexers/dmux.h"
#include "include/gates/not16.h"
#include "include/gates/and16.h"
#include "include/plexers/mux4way16.h"
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t bit;

int main(void) {
    printf("Hello, World!\n");

    bit a[16] = {0,0,0,1,0,0,1,0,0,0,1,1,0,1,0,0};
    bit b[16] = {1,0,0,1,1,0,0,0,0,1,1,1,0,1,1,0};
    bit c[16] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    bit d[16] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    bit sel[2] = {0,1};

    bit* out = mux4way16(a, b, c, d, sel);

    printf("1001100001110110\n");
    for (int i = 0; i < 16; i++) {
        printf("%d", out[i]);
    }
    printf("\n");
    free(out);

    return 0;
}
