#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

// Dichiarazione della funzione Assembly
int conta_nodi(struct Node *head);

int main() {
    // Lista: 1 -> 2 -> 3 -> NULL
    struct Node *n3 = malloc(sizeof(struct Node));
    n3->val = 3; n3->next = NULL;

    struct Node *n2 = malloc(sizeof(struct Node));
    n2->val = 2; n2->next = n3;

    struct Node *n1 = malloc(sizeof(struct Node));
    n1->val = 1; n1->next = n2;

    printf("Numero di nodi: %d\n", conta_nodi(n1)); // Atteso: 3

    // Lista vuota
    printf("Lista vuota: %d\n", conta_nodi(NULL)); // Atteso: 0

    // Cleanup
    free(n1); free(n2); free(n3);

    return 0;
}
