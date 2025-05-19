#include <stdio.h>

// Dichiarazione della funzione Assembly
int lunghezza_stringa(char *s);

int main() {
    char *s1 = "ciao";
    char *s2 = "";
    char *s3 = "1234567890";
    char *s4 = "   spazio iniziale";

    printf("Lunghezza di \"%s\": %d\n", s1, lunghezza_stringa(s1)); // Atteso: 4
    printf("Lunghezza di \"%s\": %d\n", s2, lunghezza_stringa(s2)); // Atteso: 0
    printf("Lunghezza di \"%s\": %d\n", s3, lunghezza_stringa(s3)); // Atteso: 10
    printf("Lunghezza di \"%s\": %d\n", s4, lunghezza_stringa(s4)); // Atteso: 18

    return 0;
}
