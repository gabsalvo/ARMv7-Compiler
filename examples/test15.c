#include <stdio.h>
#include <string.h>

// Dichiarazione della funzione Assembly
int strcmp_arm(char *a, char *b);

void test(char *a, char *b) {
    int res = strcmp_arm(a, b);
    printf("strcmp_arm(\"%s\", \"%s\") = %d\n", a, b, res);
}

int main() {
    test("ciao", "ciao");      // 0
    test("ciao", "ciau");      // < 0
    test("ciau", "ciao");      // > 0
    test("abc", "abcd");       // < 0
    test("abcd", "abc");       // > 0
    test("", "");              // 0
    test("a", "");             // > 0
    test("", "a");             // < 0
    return 0;
}
