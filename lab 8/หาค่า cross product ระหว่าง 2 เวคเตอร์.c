#include <stdio.h>

struct vector {
  
    float vt1;
    float vt2;
    float vt3;

};

int main()
{
  
struct vector U;
    struct vector V;
    struct vector uxv;
    printf("Enter u: ");
    scanf("%f %f %f", &U.vt1, &U.vt2, &U.vt3);
    printf("Enter v: ");
    scanf("%f %f %f", &V.vt1, &V.vt2, &V.vt3);
    uxv.vt1 = (U.vt2 * V.vt3) - (U.vt3 * V.vt2);
    uxv.vt2 = (U.vt3 * V.vt1) - (U.vt1 * V.vt3);
    uxv.vt3 = (U.vt1 * V.vt2) - (U.vt2 * V.vt1);
    printf("u x v = %.1f %.1f %.1f", uxv.vt1, uxv.vt2, uxv.vt3);


  return 0;
}