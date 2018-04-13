#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 
    0;
    for (; n > 0; n /=2){
        if (n % 2 != 0){
            numbits += 1;
        }
    }

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}