#include<stdio.h>
#include<string.h>

struct Word {
    char word[20];
    int count;    
};

int main(){
        char input[21];
        int i, last_word = 0, find = 0;
        struct Word data[20] = {0};
        scanf("%20s", input);

        while(strstr("exit",input) != "exit" ){                
                int cnt = 0;
                for (int i = 0; i < last_word;i++){
                        if (strstr(data[i].word, input) == strstr(data[i].word,data[i].word)){
                                data[i].count ++;
                                cnt ++;
                        }
                }
                if (cnt == 0){
                        strcpy(data[last_word].word,input);
                        data[last_word].count = 1;
                        last_word++;
                }
                scanf("%20s", input);    
        }

        printf("Output:\n");
        for(i=0;i<last_word;i++){
                printf("%s = %d\n", data[i].word, data[i].count);
        }
}