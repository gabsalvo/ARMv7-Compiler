#include <stdio.h>

extern int is_power_of_two(int x);

int main() {
    int tests[] = {
        0, 1, 2, 3, 4, 5, 6, 12,  8, 16, 31, 32, 63, 64,
        127, 128, 255, 256, 1024, 2048, 4096, 8192
    };

    size_t n = sizeof(tests) / sizeof tests[0];
    for (size_t i = 0; i < n; ++i) {
        int x = tests[i];
        int expected = (x > 0 && (x & (x - 1)) == 0) ? 1 : 0;
        int result = is_power_of_two(x);

        printf("is_power_of_two(%d) = %d (expected %d)%s\n",
               x, result, expected,
               (result == expected ? "" : " ❌"));
    }

    return 0;
}
