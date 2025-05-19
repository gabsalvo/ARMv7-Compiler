#include <stdio.h>

// Dichiarazione della funzione Assembly
int is_even(int x);

int main() {
    printf("is_even(0) = %d\n", is_even(0));   // 1
    printf("is_even(1) = %d\n", is_even(1));   // 0
    printf("is_even(2) = %d\n", is_even(2));   // 1
    printf("is_even(-3) = %d\n", is_even(-3)); // 0
    printf("is_even(-4) = %d\n", is_even(-4)); // 1
    return 0;
}
