#include <stdio.h>

// Dichiarazione della funzione Assembly
int conta_spazi(char *s);

int main() {
    char *s1 = "ciao come va";
    char *s2 = "nessunospazioqui";
    char *s3 = "    ";
    char *s4 = "";

    printf("Spazi in \"%s\": %d\n", s1, conta_spazi(s1)); // Atteso: 2
    printf("Spazi in \"%s\": %d\n", s2, conta_spazi(s2)); // Atteso: 0
    printf("Spazi in \"%s\": %d\n", s3, conta_spazi(s3)); // Atteso: 4
    printf("Spazi in \"%s\": %d\n", s4, conta_spazi(s4)); // Atteso: 0

    return 0;
}
