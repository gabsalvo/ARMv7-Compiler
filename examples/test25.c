#include <stdio.h>

extern int merge_bytes(int a, int b);

unsigned int ref_merge_bytes(unsigned int a, unsigned int b) {
    unsigned int high = (a >> 8) & 0xFF;
    unsigned int low  = b & 0xFF;
    return (high << 8) | low;
}

int main() {
    unsigned int tests[][2] = {
        {0x12345678, 0x000000AB},
        {0xFFFF0000, 0x00000001},
        {0x0000DEAD, 0x000000FF},
        {0x87654321, 0x000000AA},
        {0x00ABCDEF, 0x00000011},
        {0x00000000, 0x00000000},
        {0xFFFFFFFF, 0xFFFFFFFF}
    };

    size_t n = sizeof(tests) / sizeof tests[0];
    for (size_t i = 0; i < n; ++i) {
        unsigned int a = tests[i][0];
        unsigned int b = tests[i][1];

        unsigned int expected = ref_merge_bytes(a, b);
        unsigned int result   = merge_bytes(a, b);

        printf("merge_bytes(0x%08X, 0x%08X) = 0x%08X (expected 0x%08X)%s\n",
               a, b, result, expected,
               (result == expected ? "" : " ❌"));
    }

    return 0;
}
