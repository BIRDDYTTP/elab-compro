#include <stdio.h>
#include <ctype.h>

int main(){
    int hour, minute;
    char ap, mm;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c%c", &hour, &minute, &ap, &mm);
    if  (tolower(ap) == 'a' && tolower(mm) == 'm'){
        if ((hour >= 1 && hour <= 12) && (minute >= 0 && minute < 60)){
            if (hour == 12) {
                hour = 0;
            }
        }
    }
    else if (tolower(ap) == 'p' && tolower(mm) == 'm'){
        if ((hour >= 1 && hour <= 12) && (minute >= 0 && minute < 60)){
            if (hour != 12){
                hour += 12;
            }
        }
    }
    printf("Equivalent 24-hour time: %02d:%02d",hour,minute);
}