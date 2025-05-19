#include <stdio.h>

// Dichiarazione della funzione Assembly
int conta_pari(int *arr, int n);

int main() {
    int a1[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {1, 3, 5, 7};
    int a3[] = {0, -2, -4, 5, 9};
    int a4[] = {};
    int a5[] = {8};

    printf("Pari in a1: %d\n", conta_pari(a1, 6)); // Atteso: 3
    printf("Pari in a2: %d\n", conta_pari(a2, 4)); // Atteso: 0
    printf("Pari in a3: %d\n", conta_pari(a3, 5)); // Atteso: 3
    printf("Pari in a4: %d\n", conta_pari(a4, 0)); // Atteso: 0
    printf("Pari in a5: %d\n", conta_pari(a5, 1)); // Atteso: 1

    return 0;
}
