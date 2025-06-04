#include <stdio.h>

typedef struct {
    int codice;
    int prezzo;
} Prodotto;

extern int somma_prodotti(Prodotto* A, int n);

int main() {
    Prodotto P[] = {
        {101, 50}, {102, 75}, {103, 25}
    };
    printf("Totale: %d (atteso: 150)\n", somma_prodotti(P, 3));
    return 0;
}
