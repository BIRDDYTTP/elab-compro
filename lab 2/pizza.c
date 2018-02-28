#include <stdio.h>
#include <math.h>
int main()
{
    int size,pep,cheese,mushroom;
    float extra_cost,cost,fixed_cost,base_cost,radius,area,prize;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    scanf("%d", &size);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    scanf("%d", &pep);
    printf("Extra cheese? (1=yes, 0=no): ");
    scanf("%d", &cheese);
    printf("Extra mushroom? (1=yes, 0=no): ");
    scanf("%d", &mushroom);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fixed_cost = 5;
    base_cost = 2;
    extra_cost = 0;
    if (size == 1){
        radius = 10 ;
        area = radius* radius * M_PI / 4;
    }
    else if (size == 2){
        radius = 16 ;
        area = radius* radius * M_PI / 4;
    }
    else if (size == 3){
        radius = 20 ;
        area = radius* radius * M_PI / 4;
    }
    if (pep == 1){
        extra_cost = extra_cost + 0.5;
    }
    if (cheese == 1){
        extra_cost =  extra_cost + 0.25;
    }
    if (mushroom == 1){
        extra_cost = extra_cost + 0.3;
    }
    cost = fixed_cost + (base_cost * area) + (extra_cost * area);
    prize = cost * 1.5;
    printf("Your order costs %.2f baht.\n", prize);
    printf("Thank you.");

}