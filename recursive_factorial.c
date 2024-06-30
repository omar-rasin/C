/*Write a recursive function to calculate the factorial of a non-negative integer.*/

#include<stdio.h>

int fact(int n) {

    if(n==0) {
        return 1;
    }else {
        return n * fact(n-1);
    }
}

int main() {

    int num;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    printf("%d! = %d", num, fact(num));

    return 0;
}