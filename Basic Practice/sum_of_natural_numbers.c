/* Write a C program to calculate the sum of the first 'n' natural numbers. */
#include<stdio.h>

int main() {

    int n,i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=n;i>=1;i--){
        sum+=i;
    }
    printf("Sum of numbers from 1 to your number is %d\n", sum);
    return 0;
}