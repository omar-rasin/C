//This program will read two numbers from user and print the largest of them.

#include<stdio.h>

int main() {

    float x,y,largest;

    printf("Enter a number: ");
    scanf("%f", &x);

    printf("Enter a number: ");
    scanf("%f", &y);

    if(x>y){
        largest = x;
    }else largest = y;

    printf("Largest among the two is %f", largest);

    return 0;
}