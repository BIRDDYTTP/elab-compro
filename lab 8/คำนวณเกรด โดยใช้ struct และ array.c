#include <stdio.h>

typedef struct{
    char ID[12];
    int midterm;
    int final;
    char grade;
}studentGrade; 

void calculateGrade(int m, int f, int i,studentGrade *all){
    if(m+f >= 80){
        all[i].grade = 'A';
    }
    else if (m+f >= 70 && m+f < 80){
        all[i].grade = 'B';
    }
    else if (m+f >= 60 && m+f < 70){
        all[i].grade = 'C';
    }
    else if (m+f >= 50 && m+f < 60){
        all[i].grade = 'D';
    }
    else{
        all[i].grade = 'F';
    }
}

int main()
{
    studentGrade all[5];
    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%s", all[i].ID);
        printf("Enter Student Midterm: ");
        scanf("%d", &all[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &all[i].final);
        calculateGrade(all[i].midterm,all[i].final,i,all);
    }
    for (int j = 0; j < 5; j++){
        printf("Student ID %s receives grade %c.", all[j].ID, all[j].grade);
        if (j != 4) printf("\n");
    }
}