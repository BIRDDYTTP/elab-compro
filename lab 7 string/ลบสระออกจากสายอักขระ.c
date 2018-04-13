#include <stdio.h>

int remove_vowel(char *str){
long adr = str;
    while (*str != '\0'){
        if (*str == 'A' || *str == 'a' || *str == 'e' || *str == 'E' || *str == 'i' 
        || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U' ){
            while (*str != '\0'){
                if (*(str+1) != '\0'){
                    *str = *(str+1);
                }
                else{
                    *str = '\0';
                }
                str++;
            }
            str = adr;
        }
        if (*str == 'A' || *str == 'a' || *str == 'e' || *str == 'E' || *str == 'i' 
        || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U' ){
            str = str;
        }
        else{
            str ++;
        }
    }

}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}