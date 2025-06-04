#include <stdio.h>
extern int binsearch(int *A, int n, int key);

int main() {
    int A[] = {1,3,5,7,9,11,13};
    printf("idx(7) = %d (atteso 3)\n",  binsearch(A,7,7));
    printf("idx(2) = %d (atteso -1)\n", binsearch(A,7,2));
    printf("idx(13)= %d (atteso 6)\n",  binsearch(A,7,13));
    printf("idx(0) = %d (atteso -1)\n", binsearch(A,7,0));
    return 0;
}
