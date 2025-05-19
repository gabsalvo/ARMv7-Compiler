#include <stdio.h>

extern int count_ones(int x);

int main() {
    printf("count_ones(0) = %d (expected 0)\n", count_ones(0));
    printf("count_ones(1) = %d (expected 1)\n", count_ones(1));
    printf("count_ones(7) = %d (expected 3)\n", count_ones(7));
    printf("count_ones(0xFFFFFFFF) = %d (expected 32)\n", count_ones(0xFFFFFFFF));
    printf("count_ones(0xAAAAAAAA) = %d (expected 16)\n", count_ones(0xAAAAAAAA));
    printf("count_ones(0xF0F0F0F0) = %d (expected 16)\n", count_ones(0xF0F0F0F0));
    return 0;
}
