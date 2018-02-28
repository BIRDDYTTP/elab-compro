#include <stdio.h>
int main(){
    int count = 0, n, x,check;
    scanf("%d", &n);
    scanf("%d", &x);
    check = n;
    while (check > 0){
        if (check%10 == x)
            count++;
        check /= 10;
    }
    if (count == 0)
        printf("There is no \"%d\" in %d.", x, n);
    else if (count == 1)
        printf("There is only 1 \"%d\" in %d.", x, n);
    else
        printf("There are %d \"%d\"(s) in %d.", count, x, n);
}