///*Write a C program to read two numbers from user and find their difference using pointers.*/

#include<stdio.h>

int main() {

    int num1,num2,diff;

    int *ptr1 , *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);

    diff = *ptr1 - *ptr2;

    printf("The difference between the numbers is : %d", diff);

    return 0;
}