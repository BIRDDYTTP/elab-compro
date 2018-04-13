#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char*stoupper(const char *s) {

char *str;
    int i;
    str = malloc(100*sizeof(char));
    //printf("%x\n", str);
    for (i = 0; i < 100 && s[i] != '\0'; i++ ){
        str[i] = toupper(s[i]);
    }
    str[i] = '\0';
    /*printf("%x\n", str);
    for (; *str != '\0'; str++){
        printf("%c\n", *str);
    }*/
    return str;


}

int main(){
    char s[100];
    char* result;

    scanf("%s",s);
    result = stoupper(s);
        if (result == s) printf("ERROR.\n");
    printf("%s\n",result);
}