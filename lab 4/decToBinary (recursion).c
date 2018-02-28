#include <stdio.h>
void binary(int num){
    if (num < 2){
        printf("%d", num);
    }
    else{
        binary(num/2);
        printf("%d", num%2);
    }
}
int main(){
    int num, binary_number;
    scanf("%d", &num);
    binary(num);
}