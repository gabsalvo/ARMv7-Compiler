// test_list.c
#include <stdio.h>
#include <stdint.h>

// Struttura Node: deve corrispondere esattamente a quella definita in Assembly
struct Node {
    int32_t value;
    struct Node* next;
};

// Dichiarazioni esterne (vengono definite in Assembly)
extern struct Node* head_ptr;
extern int insert_head(struct Node** head, int value);
extern int remove_value(struct Node** head, int value);

// Funzione di supporto per stampare la linked list
void print_list(void) {
    struct Node* cur = head_ptr;
    printf("[ ");
    while (cur) {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("]\n");
}

int main(void) {
    int res;

    // Inserisco tre valori in testa: 10, 20, 30
    insert_head(&head_ptr, 10);
    insert_head(&head_ptr, 20);
    insert_head(&head_ptr, 30);

    printf("Lista dopo inserimenti: ");
    print_list();  
    // Atteso: [ 30 20 10 ]

    // Rimuovo il valore 20
    res = remove_value(&head_ptr, 20);
    printf("Rimozione 20 → risultato = %d\n", res);
    printf("Lista ora: ");
    print_list();
    // Atteso: [ 30 10 ]

    // Rimuovo il valore 30 (in testa)
    res = remove_value(&head_ptr, 30);
    printf("Rimozione 30 → risultato = %d\n", res);
    printf("Lista ora: ");
    print_list();
    // Atteso: [ 10 ]

    // Provo a rimuovere un valore non presente (100)
    res = remove_value(&head_ptr, 100);
    printf("Tentativo di rimuovere 100 → risultato = %d\n", res);
    printf("Lista finale: ");
    print_list();
    // Atteso: [ 10 ]

    return 0;
}
