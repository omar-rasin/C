//Program to swap two numbers using call by reference

#include<stdio.h>

void swap(int *num1, int *num2);

int main() {

    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    swap(&num1 , &num2);

    return 0;
}

void swap(int *num1, int *num2){

    int temp;

    temp = *num1;

    *num1 = *num2;

    *num2 = temp;

    printf("After swapping in swap function\n");
    printf("The value of num1 = %d\n", *num1);
    printf("The value of num2 = %d\n", *num2);
}