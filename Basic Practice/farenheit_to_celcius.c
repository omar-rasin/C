#include<stdio.h>

int main() {

    float x,y;

    printf("Enter the temperature in farenheit: ");
    scanf("%f", &x);

    y = (x - 32)*0.555555556;

    printf("The given temperature in celcius is %f", y);

    return 0;
}