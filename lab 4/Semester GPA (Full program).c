#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
    int subject,credit;
    char grade;
    float gpa,sumgrade=0,allcredit=0;
    printf("Enter number of subject(s): ");
    scanf("%d", &subject);
    for (int count = 1; count <= subject; count++){
        printf("Enter credit,grade for subject #%d: ", count);
        scanf("%d,%c", &credit, &grade);
        if (tolower(grade) == 'a'){
            sumgrade += 4.0*credit;
        }
        else if (tolower(grade) == 'b'){
            sumgrade += 3.0*credit;    
        }
        else if (tolower(grade) == 'c'){
            sumgrade += 2.0*credit;
        }
        else if (tolower(grade) == 'd'){
            sumgrade += 1.0*credit;
        }
        else if (tolower(grade) == 'f'){
            sumgrade += 0.0*credit;
        }
        allcredit += credit;
    }
    gpa = (sumgrade/allcredit);
    printf("GPA = %.2f", gpa);

}