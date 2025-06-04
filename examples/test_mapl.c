#include <stdio.h>
#include <stdlib.h>

// Definizione del tipo lista
typedef struct __el {
    int v;
    struct __el *next;
} ELEM;

// Prototipi
void mapl(ELEM *p);      // Funzione in Assembly da implementare
int fun(int x);          // Funzione C chiamata dall’Assembly

// Funzione di esempio: ritorna x+1
int fun(int x) {
    return x + 1;
}

// Utility per stampare la lista
void print_list(ELEM *head) {
    while (head != NULL) {
        printf("%d ", head->v);
        head = head->next;
    }
    printf("\n");
}

// Main di test
int main() {
    // Allochiamo e creiamo la lista: 1 → 2 → 3
    ELEM *n1 = malloc(sizeof(ELEM));
    ELEM *n2 = malloc(sizeof(ELEM));
    ELEM *n3 = malloc(sizeof(ELEM));

    n1->v = 1; n1->next = n2;
    n2->v = 2; n2->next = n3;
    n3->v = 3; n3->next = NULL;

    printf("Lista prima di mapl:\n");
    print_list(n1);  // Atteso: 1 2 3

    mapl(n1);  // Chiamata alla tua funzione in Assembly

    printf("Lista dopo mapl:\n");
    print_list(n1);  // Atteso: 2 3 4

    free(n1); free(n2); free(n3);
    return 0;
}
