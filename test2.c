#include <stdio.h>
#define ARRAY_SIZE 98


int main() {

    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (i=2;i < ARRAY_SIZE;i++) {
    int c = 0;
    for(j=2;j<=i;j++){
        if (i%j== 0){
            c++;
        }
    }
    if (c == 1)
        A[i] = i;

    }

    for (i = 2; i < ARRAY_SIZE; i++)
        if (A[i] == i)
            printf("%d ",A[i]);

  printf("\n");

  return 0;
}