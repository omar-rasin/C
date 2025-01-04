/* Write a C program to swap two numbers without using a temporary variable. */
#include<stdio.h>

 int main(){

    int x,y;

    x = 100;
    y = 200;

    x = x+y;
    y = x-y;
    x = x-y;

    printf("After switching , the values of x,y are %d,%d", x,y);

    return 0;
 }