/*Implement  a  recursive  function  to  compute  the  nth  Fibonacci number.*/

#include<stdio.h>

int sumDigits(int n){

    if(n==0) {
        return 0;
    } else {

        return (n%10) + sumDigits(n/=10);
    }
}

int main() {

    int n;
    printf("Enter a number to find its sum of digits: ");
    scanf("%d", &n);

    printf("The sum of digits of %d is %d", n, sumDigits(n));

    return 0;
}
