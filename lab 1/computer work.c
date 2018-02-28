#include <stdio.h>

int main()
{
    int time, day, hour, minute;
    printf("Enter computer working time: ");
    scanf("%d", &time);
    day = time / 1440;
    hour = (time%1440)/60;
    minute = (time%1440%60);
    printf("It is %d days %d hours and %d minutes." , day , hour , minute);
}