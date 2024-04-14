/*
This program will take the angles of a triangle as an input,
and check whether the triangle is valid or not.
*/
#include<stdio.h>

int main() {

    float a,b,c,sum;

    printf("Enter the first angle of the triangle: ");
    scanf("%f", &a);

    printf("Enter the second angle of the triangle: ");
    scanf("%f", &b);

    printf("Enter the third angle of the triangle: ");
    scanf("%f", &c);

    sum = a+b+c;

    if ( sum == 180){
        printf("Valid");
    }else printf("Invalid");

    return 0;
}
