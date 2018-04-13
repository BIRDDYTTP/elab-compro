#include <stdio.h>

int main() {
  char str[40];
  int  i=0, count;

  char c;

  printf("String <without a space>: ");
  scanf("%s",str);
  count = 0;
  for (; str[i] != '\0'; i++){
      if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i'
      || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' ){
          if (count == 0){
            printf("%c", str[i]);
          }
          else{
            printf(" %c", str[i]);
          }
          count ++;
      }
  }

  printf("\nThis string contains %d vowel%s.\n",count,count>1?"s":"");
  return 0;
}