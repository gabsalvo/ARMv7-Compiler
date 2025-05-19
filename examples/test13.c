#include <stdio.h>
#include <stdlib.h>

// Dichiarazione della funzione Assembly
int* copia_array(int *arr, int n);

void stampa_array(int *a, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int orig[] = {10, 20, 30, 40};
    int n = 4;

    int *copy = copia_array(orig, n);

    printf("Originale: ");
    stampa_array(orig, n);
    printf("Copia:     ");
    stampa_array(copy, n);

    free(copy);
    return 0;
}
