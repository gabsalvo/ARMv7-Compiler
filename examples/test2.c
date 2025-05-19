#include <stdio.h>

// Dichiarazione della funzione Assembly
int massimo(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    int res = massimo(a, b);
    printf("massimo(%d, %d) = %d\n", a, b, res); // Atteso: 20

    a = 42;
    b = 3;
    res = massimo(a, b);
    printf("massimo(%d, %d) = %d\n", a, b, res); // Atteso: 42

    a = 15;
    b = 15;
    res = massimo(a, b);
    printf("massimo(%d, %d) = %d\n", a, b, res); // Atteso: 15

    return 0;
}
