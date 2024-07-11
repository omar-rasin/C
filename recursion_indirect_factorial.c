//Write a recursive function to find factorial of a number using indirect recursion

#include<stdio.h>

int func1(int n);
int func2(int n);

void main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d! = %d", n, func1(n));


}

int func1(int n) {

    if(n<=1) {

        return 1;

    }else {

        return n*func2(n-1);
    }
}

int func2(int n) {

    if(n<=1) {

        return 1;

    }else {

        return n*func1(n-1);
    }
}