#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        for (int n = 1; n <= i; n++){
            printf("*");
        }
    printf("\n");
    }
    for (int i = num-1; i >= 1; i--){
        for (int n = 1; n <= i; n++){
            printf("*");
        }
        if (i != 1){
            printf("\n");
        }    
    }

}