#include <stdio.h>

// Prototipi delle funzioni Assembly
int conta(int n);
int pot(int n);

int main() {
    // Test più ampi per conta
    printf("[conta] conta(0xFFFFFFFF) = %d (atteso: 32)\n", conta(0xFFFFFFFF));
    printf("[conta] conta(0x80000000) = %d (atteso: 1)\n", conta(0x80000000));
    printf("[conta] conta(0x00008000) = %d (atteso: 1)\n", conta(0x00008000));
    printf("[conta] conta(0xAAAAAAAA) = %d (atteso: 16)\n", conta(0xAAAAAAAA));
    printf("[conta] conta(0x55555555) = %d (atteso: 16)\n", conta(0x55555555));
    printf("[conta] conta(0x00000000) = %d (atteso: 0)\n", conta(0x00000000));

    // Test più ampi per pot
    printf("[pot] pot(0x00000001) = %d (atteso: 1)\n", pot(0x00000001)); // 2^0
    printf("[pot] pot(0x00000002) = %d (atteso: 1)\n", pot(0x00000002)); // 2^1
    printf("[pot] pot(0x00000003) = %d (atteso: 0)\n", pot(0x00000003)); // non potenza
    printf("[pot] pot(0x00000004) = %d (atteso: 1)\n", pot(0x00000004)); // 2^2
    printf("[pot] pot(0x00000005) = %d (atteso: 0)\n", pot(0x00000005)); // non potenza
    printf("[pot] pot(0x80000000) = %d (atteso: 1)\n", pot(0x80000000)); // 2^31
    printf("[pot] pot(0xFFFFFFFF) = %d (atteso: 0)\n", pot(0xFFFFFFFF)); // tutti bit a 1

    return 0;
}
