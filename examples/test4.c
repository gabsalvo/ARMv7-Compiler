#include <stdio.h>

// Dichiarazione della funzione Assembly
int somma_array(int *arr, int n);

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {-2, 4, -1, 0};
    int a3[] = {};
    int a4[] = {42};

    printf("Somma a1: %d\n", somma_array(a1, 5)); // Atteso: 15
    printf("Somma a2: %d\n", somma_array(a2, 4)); // Atteso: 1
    printf("Somma a3: %d\n", somma_array(a3, 0)); // Atteso: 0
    printf("Somma a4: %d\n", somma_array(a4, 1)); // Atteso: 42

    return 0;
}
