/* Write a C program to swap two numbers using a temporary variable. */
#include<stdio.h>

int main(){

   int temp;

   int x = 100;
   int y = 200;

   temp = y;
   y = x;
   x = temp;


    printf("After swapping the initial integers of 100,200 becomes %d , %d",x,y);
    return 0;
}