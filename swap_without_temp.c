/* Write a C program to swap two numbers without using a temporary variable. */
#include<stdio.h>
 int main(){

    int x,y;
    x = 5;
    y = 4;

    printf("x,y");

    x = x+y;
    y = x-y;
    x = x-y;
    printf("After switching the initial values of 5,4 are %d,%d", x,y);

    return 0;
 }