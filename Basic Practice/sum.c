/* Write a C program to find the sum of two integers entered by the user. */
#include<stdio.h>

int main (){

    int x,y,z;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Enter an integer: ");
    scanf("%d", &y);

    z = x + y;

    printf("The sum of the two numbers is %d", z);
    
    return 0;
}