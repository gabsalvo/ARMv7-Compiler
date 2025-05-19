#include <stdio.h>

// Dichiarazione della funzione Assembly
int trova(int *arr, int n, int target);

void test(int *arr, int n, int x) {
    int res = trova(arr, n, x);
    printf("target %d %s nell'array\n", x, res ? "trovato" : "non trovato");
}

int main() {
    int a[] = {5, 10, 15, 20, 25};

    test(a, 5, 15);  // trovato
    test(a, 5, 5);   // trovato
    test(a, 5, 25);  // trovato
    test(a, 5, 30);  // non trovato
    test(a, 5, -1);  // non trovato

    return 0;
}
