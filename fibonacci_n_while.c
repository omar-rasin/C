/*Write a C program to find and print the first 10 Fibonacci numbers using a while loop.*/

// 0, 1, 1, 2, 3, 5, 8, 13, 21 ...

#include<stdio.h>

int main() {

    int t1 = 0 , t2 = 1, nextTerm = 0, i=1;
    int n;

    scanf("%d", &n);

    printf("The fibonacci sequence is 0\t1 ");
    printf("\t");

    while(i<=(n-2)){
        nextTerm = t1+t2;

        printf("%d\t", nextTerm);

        t1=t2;
        t2=nextTerm;

        i++;
    }
    return 0;
}