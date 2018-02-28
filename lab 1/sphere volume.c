#include <stdio.h>

int main()
{
    float rad,output;
    printf("Please enter radius: ");
    scanf("%f", &rad);
    output = (rad*rad*rad*4/3*22/7);
    printf("The volume of this sphere is %.2f",output);
}