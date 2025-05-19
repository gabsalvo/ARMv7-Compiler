#include <stdio.h>

extern int set_bit(int x, int pos);

int main() {
    printf("set_bit(0, 0) = %d (expected 1)\n", set_bit(0, 0));
    printf("set_bit(4, 1) = %d (expected 6)\n", set_bit(4, 1));
    printf("set_bit(4, 2) = %d (expected 4)\n", set_bit(4, 2));
    printf("set_bit(4, 0) = %d (expected 5)\n", set_bit(4, 0));
    printf("set_bit(0xAAAA0000, 0) = %d (expected %d)\n", set_bit(0xAAAA0000, 0), 0xAAAA0001);
    return 0;
}
