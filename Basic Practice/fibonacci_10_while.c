/*Write a C program to find and print the first 10 Fibonacci numbers using a while loop.*/

// 0, 1, 1, 2, 3, 5, 8, 13, 21 ...

#include<stdio.h>

int main() {

    int t1 =0, t2 =1, nextTerm = 0, i=0;

    printf("The Fibonacci sequence is: 0 1 ");

    while (i<8) {

        nextTerm = t1 + t2;
        printf("%d ", nextTerm);

        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    printf("\b");

    return 0;
}