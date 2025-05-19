#include <stdio.h>
#include <string.h>

void reverse(char *s);

int main() {
    char str[] = "cane";
    
     printf("Prima di reverse: %s\n", str);
     reverse(str);
    printf("Risultato: %s\n", str);
    return 0;
}
