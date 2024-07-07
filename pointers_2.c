#include<stdio.h>

int main() {

    int x = 12;

    int *pX = &x;

    printf("The address of x: %d\n", pX);
    
    //Pointer dereferencing
    printf("The value at x: %d", *pX);

    return 0;
}