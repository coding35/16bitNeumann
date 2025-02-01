// and.c
#include <stdint.h>
#include <stdio.h>

typedef uint8_t bit;

/*
    And Truth Table
    | A | B | Q |
    |---|---|---|
    | 0 | 0 | 0 |
    | 0 | 1 | 0 |
    | 1 | 0 | 0 |
    | 1 | 1 | 1 |

    HDL
    And gate:
    if (a and b) out = 1, else out = 0

    CHIP And {
            IN a, b;
            OUT out;

            PARTS:
            Nand(a=a,b=b,out=c);
            Nand(a=c,b=c,out=out);
    }
*/

bit and(bit a, bit b){
    return a & b;
}

void print_and(bit a, bit b) {
    printf("A: %d, B: %d, Q: %d\n", a, b, and(a, b));
}

void print_truth_table() {
    printf("And Truth Table\n");
    printf("| A | B | Q |\n");
    printf("|---|---|---|\n");
    print_and(0, 0);
    print_and(0, 1);
    print_and(1, 0);
    print_and(1, 1);
}

