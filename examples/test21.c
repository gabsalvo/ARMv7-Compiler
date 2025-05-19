#include <stdio.h>

extern int reverse_bits(int x);

unsigned int reverse_reference(unsigned int x) {
    unsigned int r = 0;
    for (int i = 0; i < 32; i++) {
        r <<= 1;
        r |= x & 1;
        x >>= 1;
    }
    return r;
}

int main() {
    unsigned int tests[] = {0, 1, 0xFFFFFFFF, 0xAAAAAAAA, 0x12345678};
    for (int i = 0; i < 5; i++) {
        unsigned int x = tests[i];
        unsigned int r1 = reverse_bits(x);
        unsigned int r2 = reverse_reference(x);
        printf("reverse_bits(0x%08X) = 0x%08X (expected 0x%08X)%s\n",
               x, r1, r2, (r1 == r2 ? "" : " ❌"));
    }
    return 0;
}
