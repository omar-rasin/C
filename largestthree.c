//This program will read three numbers from user and print the largest of them.
#include<stdio.h>

int main() {

    float x,y,z,largest;

    printf("Enter a number: ");
    scanf("%f", &x);

    printf("Enter a number: ");
    scanf("%f", &y);

    printf("Enter a number: ");
    scanf("%f", &z);

    if(x>y && x>z){
        largest = x;
    }else if(y>x && y>z){
        largest = y;
    }else largest = z;

    printf("The largest number among the three is %f", largest);

    return 0;
}