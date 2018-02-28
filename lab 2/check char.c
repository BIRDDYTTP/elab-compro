#include <stdio.h>

int main()
{
    char input;
    scanf("%c", &input);
    if (input >= 65 && input <= 90){
        printf("Output: upper case");
    }
    else if (input >= 97 && input <= 122){
        printf("Output: lower case");
    }
    else if (input >= 48 && input <= 57){
        printf("Output: digit");
    }
    else{
        printf("Output: others");
    }
}