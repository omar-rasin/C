//Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop.
// Calculate and print the sum of all positive integers entered.

#include<stdio.h>

int main() {

    int num;
    int sum=0;

    do
    {
    scanf("%d", &num);
    if(num!=0){
        sum+=num;
    }
    } while (num!=0);
    
    printf("Sum is %d", sum);

    return 0;
}