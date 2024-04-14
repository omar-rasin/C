/*
This program will decide whether a person is eligible to work in a particular company or not.
The criteria is that their age must be between 25 and 45.
*/

#include<stdio.h>

int main() {

    float x;
    printf("Enter your age: ");
    scanf("%f", &x);

    if(x>=25 && x<=45){
        printf("Eligible to work");
    }else printf("Not eligible to work");

    return 0;


}