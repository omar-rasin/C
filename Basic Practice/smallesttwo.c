//This program will read two numbers from user and print the smaller one from them.
#include<stdio.h>

int main() {

    float x,y,smallest;

    printf("Enter a number: ");
    scanf("%f", &x);

    printf("Enter a number: ");
    scanf("%f", &y);

    if(x<y){
        smallest = x;
    }else smallest = y;

    printf("Smallest number is %f", smallest);

    return 0;



}