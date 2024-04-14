/*
This program will take the sides of a triangle as an input,
and check whether the triangle is valid or not.
*/
#include<stdio.h>

int main() {

    float x,y,z,a,b,c;

    printf("Please enter the first side of the triangle: ");
    scanf("%f", &x);

    printf("Please enter the second side of the triangle: ");
    scanf("%f", &y);

    printf("Please enter the third side of the triangle: ");
    scanf("%f", &z);

    a = x+y;
    b = x+z;
    c = z+y;

    if (a>z){
        printf("Valid");
    }else printf("Invalid");


    return 0;

    

    


}