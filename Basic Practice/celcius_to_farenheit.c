#include<stdio.h>

int main(){

    float x,y;

    printf("Enter a temperature in Degree Celcius: ");
    scanf("%f", &x);

    y = (x*1.8) + 32;

    printf("The temperature after conversion to Farenheit is: %f", y);

    return 0;
}