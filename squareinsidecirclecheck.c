/*
This program will read the radius 'r' of a circle and the side 'a' of a square from user.
It will then then check whether or not that square can be placed inside that circle.
*/

#include<stdio.h>

int main() {

    float r,a,diagonal,diameter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the side length of a square: ");
    scanf("%f", &a);

    diagonal = 1.4142135*a; //sqrt 2*side
    diameter = 2*r;

    if (diagonal <= diameter){
        printf("Can be placed");
    }else printf("Cannot be placed");

    return 0;




}