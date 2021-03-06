#include <stdio.h>
#include <math.h>
typedef struct{
    double x;
    double y;
}Point;

int main(){
    int num;
    printf("Number of Points: ");
    scanf("%d", &num);
    Point point[num];
    for (int i = 0; i < num; i++){
        printf("P%d.X: ", i+1);
        scanf("%lf", &point[i].x);
        printf("P%d.Y: ", i+1);
        scanf("%lf", &point[i].y);
    }
    printf("Length:\n");
    for (int i = 1; i < num; i ++){
        double dx,dy,length;
        dx = pow(point[i].x - point[i-1].x, 2);
        dy = pow(point[i].y - point[i-1].y, 2);
        length = sqrt(dx+dy);
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i, point[i-1].x,point[i-1].y
              , i+1, point[i].x, point[i].y, length);
    }
    
}