//C Program to Find Sum of Digits of a Number using Recursion

#include<stdio.h>

int sum(int n){

    if(n!=0) {
        return (n%10 + sum(n/10));
    }else {
        return 0;
    }
}

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("the sum of digits of this number is: %d", sum(num));

    return 0;
}