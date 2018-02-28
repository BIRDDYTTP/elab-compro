#include <stdio.h>

int main(){
    int zero, one, two, three, input;
    scanf("%d", &input);
    zero = input % 2;
    one = (input/2)%2;
    two = (input/4)%2;
    three = (input/8)%2;
    printf("Binary number of %d is %d%d%d%d.", input, three, two, one, zero);
}