#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double pi = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int part = 1,i = 0; i < n; i++, part += 2){
        if (i%2 == 0){
            pi += 4.0 / part;
        }
        else{
            pi -= 4.0/part;
        }
    }

    printf("%.10lf", pi);
}