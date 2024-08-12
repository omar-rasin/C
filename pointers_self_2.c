//Program to create, initialize and use pointers

#include<stdio.h>

int main() {

    int num = 20;

    int * ptr;
    //Stores address of num to pointer type

    ptr = &num;

    printf("The value of num: %d, The address of num: %d\n", num, &num);

    printf("The value of ptr: %d, The address of ptr: %d\n", ptr, &ptr);

    printf("The value pointed to by ptr: %d\n", *ptr);

    return 0;
}