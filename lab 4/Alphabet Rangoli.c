#include <stdio.h>

int main(){
    int size,mostAlpha=97;
    scanf("%d", &size);
    mostAlpha += size-1;
    if (size >= 1 && size <= 26){
        for (int count = 1; count <= size; count++){
            for (int count2 = 1, n = 0; count2 <= 4*size -3; count2++){
                if (count == 1){
                    if (count2 == ((4*size-3)/2)+1){
                        printf("%c", mostAlpha);
                    }
                    else{
                        printf("-");
                    }
                }
                else{
                    if (count2 >= (((4*size-3)/2)+1)-(2*(count-1)) && count2 <= (((4*size-3)/2)+1)+((count-1)*2)){
                        if (count2 % 2 == 1 && count2 < ((4*size-3)/2)+1){
                            printf("%c", mostAlpha-n);
                            n++;
                        }
                        else if (count2 %2 == 1 && count2 >= ((4*size-3)/2)+1){
                            printf("%c", mostAlpha-n);
                            n--;
                        }
                        else{
                            printf("-");
                        }
                    }
                    else{
                        printf("-");
                    }
                }
            }
            if (size == 1)
                break;
            printf("\n");
        }
        for (int count = size-1; count >= 1; count--){
            for (int count2 = 1, n = 0; count2 <= 4*size -3; count2++){
                if (count == 1){
                    if (count2 == ((4*size-3)/2)+1){
                        printf("%c", mostAlpha);
                    }
                    else{
                        printf("-");
                    }
                }
                else{
                    if (count2 >= (((4*size-3)/2)+1)-(2*(count-1)) && count2 <= (((4*size-3)/2)+1)+((count-1)*2)){
                        if (count2 % 2 == 1 && count2 < ((4*size-3)/2)+1){
                            printf("%c", mostAlpha-n);
                            n++;
                        }
                        else if (count2 %2 == 1 && count2 >= ((4*size-3)/2)+1){
                            printf("%c", mostAlpha-n);
                            n--;
                        }
                        else{
                            printf("-");
                        }
                    }
                    else{
                        printf("-");
                    }
                }
            }
            if (count !=1){
                printf("\n");
            }
        }
    }
    else
        printf("-");
}