#include <stdio.h>

// Dichiarazione della funzione Assembly
int trova_max_idx(int *arr, int n);

// Funzione di supporto per i test
void test(int *arr, int n) {
    int idx = trova_max_idx(arr, n);
    if (idx >= 0) {
        printf("Array di lunghezza %d, massimo in posizione %d (valore %d)\n",
               n, idx, arr[idx]);
    } else {
        printf("Array vuoto (n = %d), ritorno %d\n", n, idx);
    }
}

int main() {
    int a1[] = {1, 3, 2, 5, 4};
    int a2[] = {42};
    int a3[] = {-5, -2, -8, -1, -1};
    int a4[] = {7, 7, 7, 7};
    int a5[] = {};

    test(a1, 5);   // atteso idx = 3, valore 5
    test(a2, 1);   // atteso idx = 0, valore 42
    test(a3, 5);   // atteso idx = 3, valore -1 (primo massimo)
    test(a4, 4);   // atteso idx = 0, valore 7  (tutti uguali)
    test(a5, 0);   // atteso idx = -1

    return 0;
}
