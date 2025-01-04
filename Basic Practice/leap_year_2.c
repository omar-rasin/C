/* Write a C program to check whether a year entered by the user is a leap year or not. */

#include<stdio.h>

int main() {

    int year;

    printf("Please enter the year: ");
    scanf("%d", &year);

    if ((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("Leap Year");
    }else printf("Not a Leap Year");

    return 0;
}