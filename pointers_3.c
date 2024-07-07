#include<stdio.h>

int main() {

    int x = 10;

    int *ptr = &x;

    printf("\nThe value if x: %d\n", x);
    printf("The address of x: %p\n", &x);

    printf("The value of pointer: %p\n", ptr);
    printf("The value pointed to by ptr: %d\n", *ptr);

    return 0;
}