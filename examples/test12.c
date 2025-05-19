#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

// Dichiarazione funzione Assembly
int somma_valori(struct Node *head);

int main() {
    // Lista: 3 -> 7 -> -2 -> NULL
    struct Node *n3 = malloc(sizeof(struct Node));
    n3->val = -2; n3->next = NULL;

    struct Node *n2 = malloc(sizeof(struct Node));
    n2->val = 7; n2->next = n3;

    struct Node *n1 = malloc(sizeof(struct Node));
    n1->val = 3; n1->next = n2;

    printf("Somma dei valori: %d\n", somma_valori(n1)); // Atteso: 8

    printf("Lista vuota: %d\n", somma_valori(NULL)); // Atteso: 0

    // Cleanup
    free(n1); free(n2); free(n3);
    return 0;
}
