#include <stdio.h>
#include <math.h>

int main() {
    char input;
    double x, y;

    printf("Input x: ");
    scanf("%lf", &x);
    printf("Input y: ");
    scanf("%lf", &y);

    printf("x = %5.4f, y = %5.4f\n", x, y);
    printf("[a]:Add [s]:Subtract [m]:Multiply [d]:Divide [M]:modulo [^]: x^y\n");
    printf("Command? ");
    scanf(" %c", &input);

switch (input){
    case 'a':
        printf("x + y = %5.4lf\n", x+y);
        break;
    case 's':
        printf("x - y = %5.4lf\n", x-y);
        break;

    case 'm':
        printf("x * y = %5.4lf\n", x*y);
        break;
    case 'd':
        printf("x / y = %5.4lf\n", x/y);
        break;
    case 'M':
        printf("x mod y = %5.4lf\n", fmod(x,y));
        break;
    case '^':
        printf("x ^ y = %5.4lf\n", pow(x,y));
        break;
    default :
        printf("Unknown Command.\n");
        break;
    }
}