/* Write a C program to calculate the area of a rectangle given its length and width. */
#include<stdio.h>

int main(){

    float length,width,area;

    length = 6;
    width = 5 ;

    area = length*width;

    printf("The area of the rectangle is %f", area );
    
    return 0;
}