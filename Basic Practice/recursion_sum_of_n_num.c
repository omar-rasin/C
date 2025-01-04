//A recursive function that printd the sum of n natural numbers

#include<stdio.h>

int sum(int n) {

    if(n==1) {

        return n;

    }else {

        return (n+sum(n-1));
    }
}

int main() {

    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    printf("The sum of natural numbers to %d is: %d", num, sum(num));

    return 0;
}