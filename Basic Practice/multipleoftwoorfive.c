/*
This program will check if an input integer is a multiple of either 2 or 5,
and show if it is a multiple of both.
*/
#include<stdio.h>

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x%5 == 0 && x%2 == 0){
        printf("Multiple of both");
    } else if (x%5 == 0 && x%2 != 0){
        printf("Multiple of 5");
    }else if (x%2 == 0 && x%5 !=0){
        printf("Multiple of 2");
    }else printf("Multiple of none");

    return 0;

}