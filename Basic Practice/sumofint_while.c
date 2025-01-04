//Write a C program that prompts the user to input a series of integers until the user enters 0 using a while loop. 
//Calculate and print the sum of all the positive integers entered.


#include<stdio.h>

int main() {

    int num;
    int sum=0;

    

    while(num!=0){
        scanf("%d", &num);
        sum+=num;
        
    }

    printf("sum of numbers if %d", sum);
    return 0;


}
