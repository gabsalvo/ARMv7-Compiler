#include <stdio.h>

extern int swap_bytes(int x);

int main() {
    printf("swap_bytes(0xAABBCCDD) = 0x%08X (expected 0xCCDDAABB)\n", swap_bytes(0xAABBCCDD));
    printf("swap_bytes(0x12345678) = 0x%08X (expected 0x56781234)\n", swap_bytes(0x12345678));
    printf("swap_bytes(0x0000FFFF) = 0x%08X (expected 0xFFFF0000)\n", swap_bytes(0x0000FFFF));
    printf("swap_bytes(0xDEADBEEF) = 0x%08X (expected 0xBEEFDEAD)\n", swap_bytes(0xDEADBEEF));
    printf("swap_bytes(0x00000000) = 0x%08X (expected 0x00000000)\n", swap_bytes(0x00000000));
    return 0;
}
