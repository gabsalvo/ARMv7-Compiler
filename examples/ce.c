#include <stdio.h>

// Prototipo della funzione Assembly
int ce(int x, int *v, int n);

int main() {
    int v1[] = {5, 8, 3, 10, -1};
    int n = sizeof(v1) / sizeof(v1[0]);

    printf("ce(3)  → %d (atteso: 1)\n", ce(3, v1, n));   // presente
    printf("ce(10) → %d (atteso: 1)\n", ce(10, v1, n));  // presente
    printf("ce(7)  → %d (atteso: 0)\n", ce(7, v1, n));   // assente
    printf("ce(-1) → %d (atteso: 1)\n", ce(-1, v1, n));  // presente
    printf("ce(0)  → %d (atteso: 0)\n", ce(0, v1, n));   // assente

    return 0;
}
