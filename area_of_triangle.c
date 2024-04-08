/* Write a C program to calculate the area of a triangle given its base and height. */
#include<stdio.h>

int main(){

    float base, height, area;

    printf(" Please enter the base: ");
    scanf("%f", &base);

    printf(" Please enter the height: ");
    scanf("%f", &height);

    area = base*height*0.5;
    

    printf("The area of the triangle is %f", area);

    return 0;

}