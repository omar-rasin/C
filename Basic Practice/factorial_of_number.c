/* Write a C program to calculate the factorial of a non-negative integer entered by the user. */
#include<stdio.h>

int main() {

    int num,i;
    int product=1;

    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    for(i=num;i>=1;i--){
        product*=i;
    }
    printf("The factorial of your number is %d", product);

    return 0;
}