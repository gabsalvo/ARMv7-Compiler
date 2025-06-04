#include <stdio.h>

// Definizione della struct usata
struct elem {
    int k;
    char *s;
};

// Dichiarazione della funzione Assembly
int lenOccorrenze(struct elem *v, int N, int key);

// Funzione di utilità per creare e testare
int main() {
    struct elem v[] = {
        {1, "ciao"},
        {2, "hello"},
        {1, "mondo"},
        {3, ""},
        {1, "test"},
        {4, "non_preso"},
    };

    int N = sizeof(v) / sizeof(v[0]);

    int key1 = 1;
    int key2 = 2;
    int key3 = 3;
    int key4 = 99;

    printf("Somma lunghezze per key=%d: %d (atteso: 4+5+4=13)\n", key1, lenOccorrenze(v, N, key1));
    printf("Somma lunghezze per key=%d: %d (atteso: 5)\n", key2, lenOccorrenze(v, N, key2));
    printf("Somma lunghezze per key=%d: %d (atteso: 0)\n", key3, lenOccorrenze(v, N, key3));
    printf("Somma lunghezze per key=%d: %d (atteso: 0)\n", key4, lenOccorrenze(v, N, key4));

    return 0;
}
