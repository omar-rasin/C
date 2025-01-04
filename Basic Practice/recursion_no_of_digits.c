//Write a program in C to count the digits of a given number using recursion

#include<stdio.h>
int digits(int n);

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The no. of digits in %d is: %d", n, digits(n));

    return 0;
}

int digits(int n) {

    static int count = 0;

    if(n!=0) {

        count++;

        digits(n/10);

    }else {

        return count;
    }
}