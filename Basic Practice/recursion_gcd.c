//Write a recursive function to find the GCD of two numbers

#include<stdio.h>

int gcd(int num1, int num2) {

    if(num2 != 0) {

        return gcd(num2, num1 % num2);
    }else {

        return num1;
    }
}

int main() {

    int num1, num2;

    printf("Enter two integers: ");
    
    scanf("%d %d", &num1, &num2);

    printf("The GCD of %d and %d is: %d", num1, num2, gcd(num1, num2));

    return 0;
}