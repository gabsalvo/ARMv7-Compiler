#include <stdio.h>
#include <stdint.h>

// Funzione Assembly da implementare
extern uint32_t rol(uint32_t x, int k);

// Funzione di supporto in C (per confronto)
uint32_t rol_c(uint32_t x, int k) {
    return (x << k) | (x >> (32 - k));
}

int main(void) {
    uint32_t values[] = {0x12345678, 0xFFFFFFFF, 0x00000001, 0x80000000, 0x0};
    int shifts[] = {1, 4, 8, 16, 31};
    int total = sizeof(values) / sizeof(values[0]);
    int s_total = sizeof(shifts) / sizeof(shifts[0]);

    for (int i = 0; i < total; ++i) {
        for (int j = 0; j < s_total; ++j) {
            uint32_t x = values[i];
            int k = shifts[j];
            uint32_t expected = rol_c(x, k);
            uint32_t actual = rol(x, k);
            printf("rol(0x%08X, %2d) = 0x%08X  [%s]\n", x, k, actual,
                (actual == expected) ? "OK" : "FAIL");
        }
    }

    return 0;
}
