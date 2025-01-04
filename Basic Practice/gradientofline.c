#include<stdio.h>

int main() {

    float x1,x2,y1,y2,gradient;

    printf("Enter the first pair of coordinates: ");
    scanf("%f,%f", &x1,&y1);

    printf("Enter the second pair of coordinates: ");
    scanf("%f,%f", &x2,&y2);

    gradient = (y2-y1)/(x2-x1);

    printf("Gradient of the line is %f", gradient);

    return 0;
}