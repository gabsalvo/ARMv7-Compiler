#include <stdio.h>
#include <stdint.h>

// Funzione assembly da implementare
extern uint32_t has_even_ones(uint32_t x);

// Versione di riferimento in C
uint32_t has_even_ones_ref(uint32_t x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return (count % 2 == 0) ? 1 : 0;
}

void test(uint32_t x) {
    uint32_t expected = has_even_ones_ref(x);
    uint32_t actual = has_even_ones(x);
    printf("has_even_ones(0x%08X) = %u  [%s]\n", x, actual,
           (actual == expected) ? "OK" : "FAIL");
}

int main(void) {
    uint32_t tests[] = {
        0x00000000, 0x00000001, 0xFFFFFFFF, 0xAAAAAAAA,
        0x55555555, 0x12345678, 0x87654321, 0x80000000,
        0x7FFFFFFF
    };

    for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        test(tests[i]);
    }

    return 0;
}
