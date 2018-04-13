#include <stdio.h>

int checkTocut(char *s1, char *s2,int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (s1[i] != s2[i]){
            count++;
        }
    }
    if (count < 3){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int pos,lap,check=1;
    scanf("%d", &pos);
    scanf("%d", &lap);
    char s1[pos+1];
    char s2[pos+1];
    char last[pos+1];
    scanf("%s", &s1);
    for (int count = 1; count < lap; count++){
        scanf("%s", &s2);
        if (check == 1){
            check = checkTocut(s1, s2, pos);
            if (check == 0){
                for (int i = 0; i < pos; i++) last[i] = s1[i];
                    last[pos] = '\0';
            }
            else if (check == 1 && count == lap-1){
                for (int i = 0; i < pos; i++) last[i] = s2[i];
                    last[pos] = '\0';
            }
        } 
        for (int i = 0; i < pos; i++) s1[i] = s2[i];
        s1[pos] = '\0';
    }
    printf("%s", last);
}