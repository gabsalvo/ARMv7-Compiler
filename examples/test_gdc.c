#include <stdio.h>
extern int gcd(int a, int b);

int main() {
    printf("gcd(48,18) = %d (atteso 6)\n",  gcd(48,18));
    printf("gcd(101, 103) = %d (atteso 1)\n", gcd(101,103));
    printf("gcd(0, 5) = %d (atteso 5)\n",    gcd(0,5));
    printf("gcd(7, 0) = %d (atteso 7)\n",    gcd(7,0));
    return 0;
}
