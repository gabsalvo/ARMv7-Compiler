#include <stdio.h>

extern unsigned int rotate_left(unsigned int x, int n);

unsigned int ref_rotate_left(unsigned int x, int n) {
    n = n % 32;
    return (x << n) | (x >> (32 - n));
}

int main(void) {
    // Definisco un struct per chiarezza
    struct {
        unsigned int x;
        int          n;
    } tests[] = {
        {0x00000001,  1},
        {0x00000001,  4},
        {0x00000001, 31},
        {0x00000001, 32},
        {0x80000000,  1},
        {0x12345678,  8},
        {0xFFFFFFFF, 16},
        {0x0F0F0F0F, 12},
        {0xDEADBEEF,  5},
        {0x00000000,  7}
    };

    // Calcolo il numero di test in modo robusto
    size_t count = sizeof tests / sizeof tests[0];

    // Uso size_t per l’indice, così non ho warning signed/unsigned
    for (size_t i = 0; i < count; ++i) {
        unsigned int x = tests[i].x;
        int          n = tests[i].n;

        unsigned int expected = ref_rotate_left(x, n);
        unsigned int result   = rotate_left(x, n);

        printf("rotate_left(0x%08X, %2d) = 0x%08X (expected 0x%08X)%s\n",
               x, n, result, expected,
               (result == expected ? "" : " ❌"));
    }

    return 0;
}
