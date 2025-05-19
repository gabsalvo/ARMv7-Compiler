#include <stdio.h>

extern int clear_bit(int x, int pos);

int main() {
    printf("clear_bit(1, 0) = %d (expected 0)\n", clear_bit(1, 0));
    printf("clear_bit(7, 1) = %d (expected 5)\n", clear_bit(7, 1));
    printf("clear_bit(7, 2) = %d (expected 3)\n", clear_bit(7, 2));
    printf("clear_bit(7, 0) = %d (expected 6)\n", clear_bit(7, 0));
    printf("clear_bit(0xFFFF0001, 0) = %d (expected %d)\n", clear_bit(0xFFFF0001, 0), 0xFFFF0000);
    return 0;
}
