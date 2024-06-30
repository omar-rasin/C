/*Create a recursive function to calculate the exponentiation of a number.*/

#include<stdio.h>

int exponent(int a, int b) {

    if(b==0) {
        return 1;
    } else {
        return a*exponent(a, b-1);
    }

}

int main() {

    int a,b;
    printf("Input two numbers to find its exponentiation: ");
    scanf("%d %d", &a, &b);

    printf("%d^%d is %d", a, b, exponent(a,b));

    return 0;
}