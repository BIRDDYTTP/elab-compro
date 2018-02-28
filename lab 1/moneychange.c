#include <stdio.h>

int main()
{
    int amount,fifty,twenty,five,one;
    printf("Enter an amount: ");
    scanf("%d", &amount);
    fifty = amount/50;
    twenty = (amount%50)/20;
    five = ((amount%50)%20)/5;
    one = ((amount%50)%20)%5;
    printf("1: %d\n5: %d\n20: %d\n50: %d", one, five, twenty, fifty);
}