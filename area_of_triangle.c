/* Write a C program to calculate the area of a triangle given its base and height. */
#include<stdio.h>

int main(){

    float base, height, area;

    base = 12;
    height = 8;

    area = base*height*(1.0/2.0);

    printf("The area of the triangle is %f", area);

    return 0;

}