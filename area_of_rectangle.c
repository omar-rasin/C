/* Write a C program to calculate the area of a rectangle given its length and width. */
#include<stdio.h>

int main(){

    float length, width, area;

    printf(" Please enter the length: ");
    scanf("%f", &length);

    printf(" Please enter the width: ");
    scanf("%f", &width);

    area = length*width;

    printf("The area of the rectangle is %f", area);

    
    return 0;
}