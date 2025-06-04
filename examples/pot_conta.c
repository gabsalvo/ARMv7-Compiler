#include <stdio.h>

// Prototipi delle funzioni in Assembly
int conta(int n);  // conta i bit a 1
int pot(int n);    // verifica se è potenza di due

int main() {
    // Test per conta
    printf("conta(0)    = %d (atteso: 0)\n", conta(0));
    printf("conta(1)    = %d (atteso: 1)\n", conta(1));
    printf("conta(2)    = %d (atteso: 1)\n", conta(2));
    printf("conta(3)    = %d (atteso: 2)\n", conta(3));
    printf("conta(15)   = %d (atteso: 4)\n", conta(15));
    printf("conta(1023) = %d (atteso: 10)\n", conta(1023));

    // Test per pot
    printf("pot(0)    = %d (atteso: 0)\n", pot(0));    // non è potenza di due
    printf("pot(1)    = %d (atteso: 1)\n", pot(1));    // 2^0
    printf("pot(2)    = %d (atteso: 1)\n", pot(2));    // 2^1
    printf("pot(3)    = %d (atteso: 0)\n", pot(3));
    printf("pot(4)    = %d (atteso: 1)\n", pot(4));    // 2^2
    printf("pot(5)    = %d (atteso: 0)\n", pot(5));
    printf("pot(1024) = %d (atteso: 1)\n", pot(1024)); // 2^10
    printf("pot(1023) = %d (atteso: 0)\n", pot(1023));

    return 0;
}
