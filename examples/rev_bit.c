#include <stdio.h>
#include <stdint.h>

// Funzione Assembly da implementare
extern uint8_t reverse_bits(uint8_t x);

// Implementazione C di riferimento (usata per confronto automatico)
uint8_t reverse_bits_ref(uint8_t b) {
    b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
    b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
    b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
    return b;
}

void test(uint8_t x) {
    uint8_t expected = reverse_bits_ref(x);
    uint8_t actual   = reverse_bits(x);
    printf("reverse_bits(0x%02X) = 0x%02X  [%s]\n",
           x, actual,
           (actual == expected) ? "OK" : "FAIL");
}

int main(void) {
    uint8_t tests[] = {
        0x00, 0x01, 0x02, 0x0F, 0x10, 0x3C,
        0x55, 0xAA, 0xF0, 0xFF, 0x81, 0x7E
    };

    int n_tests = sizeof(tests) / sizeof(tests[0]);
    for (int i = 0; i < n_tests; ++i) {
        test(tests[i]);
    }

    return 0;
}
