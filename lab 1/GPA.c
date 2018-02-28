#include <stdio.h>

int main()
{
    float previousgpa,required_gpa,marks,ans;
    int previouscredit,credit_thissemester;
    printf("Input the previous semester GPA: ");
    scanf("%f", &previousgpa);
    printf("Input the previous credits: ");
    scanf("%d", &previouscredit);
    printf("Input the credits this semester: ");
    scanf("%d", &credit_thissemester);
    printf("Input the required GPA: ");
    scanf("%f", &required_gpa);
    marks = previouscredit * previousgpa;
    ans = ((required_gpa*(previouscredit+credit_thissemester))-marks)/credit_thissemester;
    printf("The GPA this semester should be %.2f", ans);
}