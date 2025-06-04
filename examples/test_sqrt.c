#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Funzione Assembly da implementare
extern int int_sqrt(int n);

// Funzione di riferimento in C per il confronto
int ref_sqrt(int n) {
    if (n < 0) return -1; // opzionale, per sicurezza
    int sol = 1;
    while ((sol + 1) * (sol + 1) <= n) {
        sol++;
    }
    return sol;
}

int main() {
    int tests[] = {
        0, 1, 2, 3, 4, 7, 8, 9, 10, 15, 16, 17, 100, 101, 255, 256, 257, 10000
    };
    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++) {
        int val = tests[i];
        int result = int_sqrt(val);
        int expected = ref_sqrt(val);
        printf("int_sqrt(%d) = %d\t[expected: %d] %s\n",
               val, result, expected, (result == expected ? "OK" : "FAIL"));
    }

    return 0;
}
