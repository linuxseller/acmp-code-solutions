#include <stdio.h>
#include <math.h>

double area(int x1,int y1,int x2,int y2,int x3,int y3){
    return fabs(1.*(x2-x1)*(y3-y1)-(1.*(x3-x1)*(y2-y1)))/2.;
}

int main() {
    int x1,y1,x2,y2,x3,y3,a,b,c;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%g", area(x1,y1,x2,y2,x3,y3));
    return 0;
} 
