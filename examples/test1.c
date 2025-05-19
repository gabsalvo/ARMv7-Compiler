#include <stdio.h>

// Dichiarazione della funzione Assembly
int somma(int a, int b);

int main() {
    int x = 5;
    int y = 7;
    int risultato = somma(x, y);

    printf("somma(%d, %d) = %d\n", x, y, risultato); // Atteso: 12

    return 0;
}
