//Write a C program that prompts the user to enter a positive integer. 
//It then calculates and prints the factorial of that number using a while loop.

#include<stdio.h>

int main() {

    int num;
    int count=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>1){
        count*=num;
        num--;
    }
    printf("The factorial is %d", count);

    return 0;
}