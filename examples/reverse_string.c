#include <stdio.h>
extern void reverse(char *s);

int main() {
    char s1[] = "armv7";
    reverse(s1);
    printf("%s (atteso: 7vmra)\n", s1);

    char s2[] = "palindrome";
    reverse(s2);
    printf("%s (atteso: emordnilap)\n", s2);
    return 0;
}
