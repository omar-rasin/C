/* Write a C program to calculate the sum of all even numbers from 1 to 'n' where 'n' is entered by the user. */

#include<stdio.h>

int main() {

    int n,i;
    int sum=0;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum of even numbers from 1 to %d is %d", n, sum);
    return 0;
}
