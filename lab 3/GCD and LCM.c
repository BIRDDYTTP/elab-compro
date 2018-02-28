#include <stdio.h>
int main(){
    long num1,num2,check1,check2,check3,gcd,lcm;
    scanf("%lu %lu", &num1, &num2);
    check1 = num1;
    check2 = num2;
    while (check2 != 0){
        check3 = check2;
        check2 = check1%check2;
        check1 = check3;
    }
    gcd = check1;
    lcm = (num1*num2)/gcd;
    printf("GCD: %lu\n", gcd);
    printf("LCM: %lu", lcm);
}