/*
This program will check if an input integer is a multiple of 5, or 11, or both, or neither.
*/

#include<stdio.h>

int main() {

    int x;

    printf("Please enter a number: ");
    scanf("%d", &x);

    if(x%5 == 0 && x%11 == 0){
        printf("Multiple of both");
    } else if (x%5 == 0 && x%11 != 0){
        printf("Multiple of 5");
    }else if (x%11 == 0 && x%5 !=0){
        printf("Multiple of 11");
    }else printf("Multiple of none");

    return 0;
}
