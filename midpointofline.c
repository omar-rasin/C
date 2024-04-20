#include<stdio.h>

int main() {

    float x1,x2,y1,y2,midpointX,midpointY;

    printf("Enter the coordinates of the first point: ");
    scanf("%f,%f", &x1,&y1);

    printf("Enter the coordinates of the second point: ");
    scanf("%f,%f", &x2,&y2);

    midpointX = (x1+x2)/2;
    midpointY = (y1+y2)/2;

    printf("Midpoint of this line segment if %f , %f", midpointX , midpointY);

    return 0;



}