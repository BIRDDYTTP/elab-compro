#include <stdio.h>
int is_prime(int i){
    int count = 0;
    for (int n = 1; n <= i; n++){
        if (i % n == 0){
            count ++;
        }
    }
    if (count == 2)
        return 1;
    return 0;
}
int main(){
    int num;
    scanf("%d", &num);
    for (int i = 0; i <= num; i++ ){
        
        if (is_prime(i))
            printf("%d is a prime number.\n", i);
    }
}