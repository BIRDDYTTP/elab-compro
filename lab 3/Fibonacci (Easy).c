#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1 || n == 2){
        return 1;
    }
    else{
        int f1,f2,count,fn;
        f1 = 1;
        f2 = 1;
        count = 3;
        while (count <= n){
            fn = f1+f2;
            f2 = f1;
            f1 = fn;
            count ++;
        }
        return fn;
    }
}
int main(){
    int n,i;
    scanf("%d", &n);
    for (int i2 = 0; i2 <= n; i2++){
        i = fibo(i2);
        printf("F(%d) = %d",i2 ,i);
        if (i2 < n){
            printf("\n");
        }
    }
}