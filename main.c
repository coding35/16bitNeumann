#include <stdio.h>
#include "include/and.h"
#include "include/not.h"
#include "include/or.h"
#include <stdint.h>

typedef uint8_t bit;

int main(void) {
    printf("Hello, World!\n");
    bit a = or(0, 0);
    printf("a: %d\n", a);

    return 0;
}
