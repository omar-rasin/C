//Program to get memory address using address of operator

#include<stdio.h>

int main() {

    //Simple Declarations:
    
    char character = 'B';

    int integer = 2;

    float decimal = 10.84;

    long long int largenum = 103782892320;

    //Printing variable value with their memory address

    printf("Value of character: %c, Address of character: %d\n", character, &character);

    printf("Value of integer: %d, Address of integer: %d\n", integer, &integer);

    printf("Value of decimal: %f, Address of decimal: %d\n", decimal, &decimal);

    printf("Value of large Number: %d, Address of large Number: %d\n", largenum, &largenum);

    return 0;
}