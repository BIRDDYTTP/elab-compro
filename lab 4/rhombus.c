#include <stdio.h>

int main(){
    int w, l;
    scanf("%d", &w);
    scanf("%d", &l);
    for (int i = 1; i <= l; i++){
        for (int n = 1; n <= w+l; n++){
            if (i==1 && (n >=1 && n<=w)){
                printf("*");
            }
            else if (i == l && (n >= l && n<= w+l-1)){
                printf("*");
            }
            else if (n == i || n == w+i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        if (i != l)
        printf("\n");
    }
}