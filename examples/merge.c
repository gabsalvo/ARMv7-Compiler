#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

// Funzione Assembly che devi implementare
extern Node* merge(Node* a, Node* b);

// Funzione di supporto per creare un nodo in C (utile per testare più velocemente)
Node* create_node(int value) {
    Node* n = malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

// Funzione per costruire una lista ordinata da un array
Node* build_list(int* arr, int len) {
    if (len == 0) return NULL;
    Node* head = create_node(arr[0]);
    Node* current = head;
    for (int i = 1; i < len; ++i) {
        current->next = create_node(arr[i]);
        current = current->next;
    }
    return head;
}

// Stampa una lista
void print_list(Node* head) {
    printf("[ ");
    while (head) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("]\n");
}

// Libera una lista
void free_list(Node* head) {
    while (head) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main(void) {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    Node* list1 = build_list(arr1, sizeof(arr1) / sizeof(int));
    Node* list2 = build_list(arr2, sizeof(arr2) / sizeof(int));

    printf("Lista A: ");
    print_list(list1);
    printf("Lista B: ");
    print_list(list2);

    Node* result = merge(list1, list2);

    printf("Lista risultante: ");
    print_list(result);

    // Pulizia
    free_list(list1);
    free_list(list2);
    free_list(result);

    return 0;
}
