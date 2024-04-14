//This program will read three numbers from the user and print the smallest one from them.

#include<stdio.h>

int main() {

    float x,y,z,smallest;

    printf("Please enter a number: ");
    scanf("%f", &x);

    printf("Please enter a number: ");
    scanf("%f", &y);

    printf("Please enter a number: ");
    scanf("%f", &z);

    if(x<y && x<z){
        smallest = x;
    }else if (y<x && y<z){
        smallest = y;
    }else smallest = z;

    printf("Smallest among the three is %f", smallest);

    return 0;
}