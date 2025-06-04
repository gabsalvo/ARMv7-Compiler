#include <stdio.h>

extern int first_occurrence(const char *s, char c); // funzione scritta in ARMv7

int main() {
    const char *str = "hello world";
    
    printf("Test 1: %d (expected: 2)\n", first_occurrence(str, 'l'));
    printf("Test 2: %d (expected: 0)\n", first_occurrence(str, 'h'));
    printf("Test 3: %d (expected: 6)\n", first_occurrence(str, 'w'));
    printf("Test 4: %d (expected: -1)\n", first_occurrence(str, 'z'));
    printf("Test 5: %d (expected: 10)\n", first_occurrence(str, 'd'));
    
    return 0;
}
