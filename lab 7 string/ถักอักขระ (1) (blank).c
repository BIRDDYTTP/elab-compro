#include <stdio.h>

int charcount(char *s)
{
   
    int count = 0;
    for (; *s != '\0'; s++){
        count++;
    }
    return count;

}

void charweave(char *s,char *result)
{

    int size,i,indexS;
    size = charcount(s);
    for (i = 0,indexS = 0; i < size*2; i+=2,indexS++){
        result[i] = s[indexS];
        result[i+1] = s[size-indexS-1]; 
    }
    result[i] = '\0';

}

main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}