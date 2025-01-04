/*
This program will take the sides of a triangle as an input,
and check whether the triangle is valid or not.
*/
#include<stdio.h>

int main() {

    float side1,side2,side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1,&side2,&side3);

    if((side1 + side2 > side3) &&  (side1 + side3 > side2) && (side3 + side2 > side1)){
        printf("valid");
    }else printf("Invalid");

    return 0;
    
}