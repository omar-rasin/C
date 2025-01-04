/* Write a C program to calculate the sum of all odd numbers from 1 to 'n' where 'n' is entered by the user. */

#include<stdio.h>

int main() {

    int n;
    int i;
    int sum = 0;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2 !=0){
            sum = sum+i;
        }
    }
    printf("Sum of odd numbers from 1 to your number is %d", sum);

    return 0;
}