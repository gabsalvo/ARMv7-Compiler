#include <stdio.h>

// Dichiarazione della funzione Assembly
int inverti_array(int *arr, int n);

// Stampa l’array per debug
void stampa_array(int *arr, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {10, 20, 30, 40};
    int a3[] = {};
    int a4[] = {99};

    inverti_array(a1, 5);
    inverti_array(a2, 4);
    inverti_array(a3, 0);
    inverti_array(a4, 1);

    printf("a1: "); stampa_array(a1, 5); // [5, 4, 3, 2, 1]
    printf("a2: "); stampa_array(a2, 4); // [40, 30, 20, 10]
    printf("a3: "); stampa_array(a3, 0); // []
    printf("a4: "); stampa_array(a4, 1); // [99]

    return 0;
}
