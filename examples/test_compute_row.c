#include <stdio.h>

// Prototipo della funzione in Assembly
int compute_row(int *r, int n);

int main() {
    int v1[] = {10, 3, 5, 8, 2, 7};   // minimo = 2
    int v2[] = {-5, -10, -3, -1};     // minimo = -10
    int v3[] = {42};                  // minimo = 42
    int v4[] = {0, 0, 0, 0};          // minimo = 0

    printf("Minimo v1: %d (atteso: 2)\n", compute_row(v1, 6));
    printf("Minimo v2: %d (atteso: -10)\n", compute_row(v2, 4));
    printf("Minimo v3: %d (atteso: 42)\n", compute_row(v3, 1));
    printf("Minimo v4: %d (atteso: 0)\n", compute_row(v4, 4));

    return 0;
}
