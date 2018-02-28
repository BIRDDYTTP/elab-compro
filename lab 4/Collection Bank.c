#include <stdio.h>

int main(){
    double goal, today, sum = 0, target;
    int day = 1;
    printf("Enter your goal amount: ");
    scanf("%lf", &goal);
    target = goal;
    while (sum < target){
        printf("Enter money collected today: ");
        scanf("%lf", &today);
        sum += today;
        goal -= today;
        if (sum < target){
            printf("Total money collected up to day %d is %.2lf. You need %.2lf more.\n", day, sum, goal);
        }
        else{
            if (day != 1)
                printf("Congratulations! You take %d days to reach your goal.", day);
            else 
                printf("Congratulations! You take %d day to reach your goal.", day);
        }
        day ++;
    }
}