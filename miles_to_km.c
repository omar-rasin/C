#include<stdio.h>

int main() {

    float x,y;

    printf("Enter the distance in miles: ");
    scanf("%f", &x);

    y = x*1.6;

    printf("The distance in kilometers is: %f", y);

    return 0;
}