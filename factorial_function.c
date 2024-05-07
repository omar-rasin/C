/*Write a function that calculates the factorial of a number , calls and uses it in main().*/

#include<stdio.h>

int factorial(int num);

int main() {

    int num;
    int result;
    scanf("%d", &num);

    result = factorial(num);
    printf("Factorial of %d is %d", num, result );

}

int factorial(int num){

    int product = 1;
    for(int i=1;i<=num;i++){
        product*=i;

    }
    return product;
}