/* Write a C program to calculate the average of three numbers entered by the user. */
#include<stdio.h>

int main(){

    float x,y,z,avg;

    printf("Please enter the first number : ");
    scanf("%f", &x);

    printf("Please enter the second number : ");
    scanf("%f", &y);

    printf("Please enter the third number : ");
    scanf("%f", &z);

    avg = (x+y+z)/3;

    printf("The average of the three numbers inputted is %f", avg);

    return 0;



}