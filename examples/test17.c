#include <stdio.h>

int get_bit(int x, int pos);

int main() {
    printf("get_bit(5, 0) = %d\n", get_bit(5, 0));  // 1 (101)
    printf("get_bit(5, 1) = %d\n", get_bit(5, 1));  // 0
    printf("get_bit(5, 2) = %d\n", get_bit(5, 2));  // 1
    printf("get_bit(8, 3) = %d\n", get_bit(8, 3));  // 1 (1000)
    printf("get_bit(8, 0) = %d\n", get_bit(8, 0));  // 0
    printf("get_bit(-1, 31) = %d\n", get_bit(-1, 31)); // 1 (bit di segno)
    return 0;
}
