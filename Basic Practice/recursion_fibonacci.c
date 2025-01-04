/*Implement  a  recursive  function  to  compute  the  nth  Fibonacci number.*/

#include<stdio.h>
int fibonacci(int n) {

    if(n==1) {
        return 0;
    }else if(n==2) {
        return 1;
    }else {

        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main() {

    int n;

    printf("Enter the fibonacci term you want to find out: ");
    scanf("%d", &n);

    printf("%dth fibonacci term is %d", n, fibonacci(n));

    return 0;
}