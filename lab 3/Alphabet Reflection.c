#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if (num >= 1 && num <= 26){
        for (int i = num-1,count = 1; count <= (num-1)*2; count++){
            if (count%2 == 0){
                printf("-");
            }
            else{
                printf("%c", (97+i));
                i--;
            }
        }
        for (int i = 0, count = 0; count < (num*2)-1;count++ ){
            if (count%2 == 0){
                printf("%c", (97+i));
                i++;
            }
            else{
                printf("-");
            }
        }
    }
    else{
        printf("-");
    }
}