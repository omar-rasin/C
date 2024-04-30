//Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include<stdio.h>

int main() {

    int i=0;
    int x=10;

    while(i<=10){
        printf("%d\t", i);
        i++;
    }
    printf("\n");

    while(x>=0){
        printf("%d\t", x);
        x--;

    }

    return 0;
}