#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter length of side A: ");
    scanf("%d", &a);
    printf("Enter length of side B: ");
    scanf("%d", &b);
    printf("Enter length of side C: ");
    scanf("%d", &c);
    if ((a <= 0 || b <= 0 || c <= 0)||(a+b<=c || b+c <= a || c+a <= b)){
        printf("Triangle type is invalid.");
    }
    else{
        if (a == b && b == c && c == a){
            printf("Triangle type is equilateral.");
        }
        else if (a == b || b == c || c == a){
            printf("Triangle type is isosceles.");
        }
        else{
            printf("Triangle type is scalene.");
        }
    }
}