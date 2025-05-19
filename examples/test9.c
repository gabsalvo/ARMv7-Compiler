#include <stdio.h>

// Dichiarazione della funzione Assembly
int is_palindroma(char *s);

// Funzione C per vedere anche cosa ti aspetti
void test(char *s) {
    int r = is_palindroma(s);
    printf("\"%s\" è palindroma? %s\n", s, r ? "Sì" : "No");
}

int main() {
    test("abba");       // Sì
    test("abcba");      // Sì
    test("abcd");       // No
    test("");           // Sì
    test("a");          // Sì
    test("abcdeedcba"); // Sì
    test("ciao");       // No
    return 0;
}
