/*Write a C program to read two numbers from user and add them using pointers.*/

#include<stdio.h>

int main() {

    int num1,num2;

    int *ptr1 , *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);

    int sum = *ptr1 + *ptr2;

    printf("The sum of the two numbers is: %d", sum);

    return 0;
}