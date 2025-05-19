#include <stdio.h>

// Dichiarazione della funzione Assembly
int conta_vocali(char *s);

int main() {
    char *s1 = "ciao";
    char *s2 = "bcdfg";
    char *s3 = "";
    char *s4 = "aeiou";
    char *s5 = "tutti i gatti sono belli";

    printf("Vocali in \"%s\": %d\n", s1, conta_vocali(s1)); // 3
    printf("Vocali in \"%s\": %d\n", s2, conta_vocali(s2)); // 0
    printf("Vocali in \"%s\": %d\n", s3, conta_vocali(s3)); // 0
    printf("Vocali in \"%s\": %d\n", s4, conta_vocali(s4)); // 5
    printf("Vocali in \"%s\": %d\n", s5, conta_vocali(s5)); // 9

    return 0;
}
