/*
This program will take the angles of a triangle as an input,
and check whether the triangle is valid or not.
*/
#include<stdio.h>

int main() {

    float angle1,angle2,angle3,sum;

    printf("Enter the three angles of the triangle : ");
    scanf("%f %f %f", &angle1,&angle2,&angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180){
        printf("valid");
    }else printf("Invalid");

    return 0;
}
