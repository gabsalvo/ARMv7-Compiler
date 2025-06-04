#include <stdio.h>

extern int conta_primi(int* A, int n);

int main() {
    int A[] = {2, 4, 5, 6, 7, 9, 11, 15, 17};
    int res = conta_primi(A, 9);
    printf("Primi trovati: %d (atteso: 5)\n", res);
    return 0;
}
