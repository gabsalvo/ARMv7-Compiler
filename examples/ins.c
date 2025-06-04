#include <stdio.h>
#include <stdint.h>

// Struttura che deve corrispondere a quella usata in Assembly
typedef struct Node {
    int32_t value;
    struct Node* next;
} Node;

// Puntatore alla testa della lista (usato anche in Assembly)
Node* head_ptr = 0;

// Funzione Assembly (definita nel file .s)
extern int insert_head(Node** head, int value);

// Stampa la lista
void print_list(Node* head) {
    printf("[ ");
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("]\n");
}

int main(void) {
    insert_head(&head_ptr, 10);
    insert_head(&head_ptr, 20);
    insert_head(&head_ptr, 30);

    printf("Lista attuale: ");
    print_list(head_ptr);
    // Atteso: [ 30 20 10 ]

    return 0;
}
