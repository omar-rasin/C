//Write a function to calculate the power of a number, call and use it in main.

#include<stdio.h>

int power(int base, int exponent){

    int result=1;

    for(int i=1;i<=exponent;i++){
        result*=base;
    }
    return result;

}

int main() {

    int base,exponent,result;

   printf("Enter the base: ");
   scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d raised to %d is %d", base, exponent, result);

    return 0;
}

