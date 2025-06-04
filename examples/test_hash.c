#include <stdio.h>

// Funzione Assembly da implementare
extern int hash(char *s);

// Funzione di riferimento in C per il confronto
int ref_hash(char *s) {
    int acc = 0;
    while (*s) {
        acc = (acc << 2) | (*s & 0b11);
        s++;
    }
    return acc & 0xF; // modulo 16
}

int main() {
    char *tests[] = {
        "abc",         // atteso: 0b011011 = 27 & 0xF = 11
        "A",           // 'A' = 65 = 0b1000001 -> ultimi due bit: 01 -> 1
        "Hi",          // 'H' = 72 = 00, 'i' = 105 = 01 -> 00 01 = 1
        "xyz",         // ultimi bit: 01 10 11 = 011011 = 27 & 0xF = 11
        "",            // stringa vuota -> 0
        "abcd",        // ultimi bit: 01 10 11 00 = 01101100 = 108 & 0xF = 12
        NULL
    };

    for (int i = 0; tests[i] != NULL; i++) {
        int res = hash(tests[i]);
        int expected = ref_hash(tests[i]);
        printf("hash(\"%s\") = %d\t[expected: %d] %s\n",
               tests[i], res, expected, (res == expected ? "OK" : "FAIL"));
    }

    return 0;
}
