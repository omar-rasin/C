/* Write a C program to check whether a year entered by the user is a leap year or not. */
#include<stdio.h>

int main() {

    int x;

    printf("Please enter a year: ");
    scanf("%d", &x);

    if (x%4 != 0){
        printf("Not a leap year");
    }else if (x%100 != 0){
        printf("Leap year!");
    }else if (x%400 != 0){
        printf("Not a leap year");
    }else printf("Leap year");

    return 0;
}