#include <stdio.h>
#include <math.h>

int main(){
    float num,num2;
    char operator;
    printf("Initial Value: ");
    scanf("%f", &num);
    printf("\nOperator: ");
    scanf("\n%c", &operator);
    while (operator == '+' || operator == '-' || operator == '*' || operator == '/'){
        printf("Input Value: ");
        scanf("%f", &num2);
        if (operator == '+'){
            num += num2;
        }
        else if (operator == '-'){
            num -= num2;
        }
        else if (operator == '*'){
            num *= num2;
        }
        else if (operator == '/'){
            num /= num2;
        }
        printf("Present Value is %.4f\n", num);
        printf("\nOperator: ");
        scanf("\n%c", &operator);
    }
    printf("\nFinish Calculation. Final Value is %.4f", num);   
}
