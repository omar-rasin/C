#include<stdio.h>

int main(){

    float x,y;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &x );

    y = x/1.609344;

    printf("The distance in miles is : %f", y);

    return 0;
}