#include <stdio.h>

int main()
{
    float salary,tax;
    scanf("%f", &salary);
    if (salary < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
    else{ 
        if (salary <= 300000.00){
                tax = salary*0.05;
        }
        else if (salary > 300000.00){
            tax = (15000.00)+(salary - 300000.00)*0.10;
        }
        printf("%.2f", tax);
    }
}