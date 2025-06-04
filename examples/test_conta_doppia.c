#include <stdio.h>

extern int conta_doppie(char* s);

int main() {
    printf("Test 1: %d (atteso: 2)\n", conta_doppie("batteria"));     // tt, rr
    printf("Test 2: %d (atteso: 0)\n", conta_doppie("ciao"));         // niente
    printf("Test 3: %d (atteso: 3)\n", conta_doppie("fissaggio"));    // ss, gg, gg
    return 0;
}
