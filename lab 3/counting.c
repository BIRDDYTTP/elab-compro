#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if (num >= 0){
        for (int i = 0; num >= i; num--){
            printf("%d",num);
            if (num != 0){
                printf("\n");
            }
        }
    }
}