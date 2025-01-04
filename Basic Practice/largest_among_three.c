/* Write a C program to find the largest among three numbers entered by the user. */
#include<stdio.h>

int main(){

    float x,y,z,largest;

    printf("Enter a number: ");
    scanf("%f", &x);

    printf("Enter a number: ");
    scanf("%f", &y);

    printf("Enter a number: ");
    scanf("%f", &z);

    if(x>y && x>z){
        largest = x;
    }else if(y>x && y>z){
        largest = y;
    } else largest = z;

    printf("Among the three numbers , the largest is %f", largest);

    return 0;


}