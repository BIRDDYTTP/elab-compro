#include <stdio.h>
#include <math.h>

int main() {
    int a,b,n, found=0;
    double c;

    scanf("%d", &n);
    for (c = 3; c <= n; c ++){
        for (b = 2; b < c; b ++){
            for (a = 1; a < b; a++){
                if (a+b+c == n && (a*a)+(b*b) == (c*c)){
                    found ++;
                    break;
                }
            }
            if (found != 0){
                break;
            }
        }
        if (found != 0){
            break;
        }
    }
    


    if (found) {
        printf("(%d, %d, %d)\n", a,b,(int)c);
    } else {
        printf("No triple found.\n");
    }
}