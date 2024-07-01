#include<stdio.h>

int main() {

    int num1,num2;

    printf("Enter two numbers: ");

    scanf("%d %d", &num1, &num2);

    int min;

    if(num1>num2) {

     min = num2;
    }else min = num1;

    int GCD = 1;

    for(int i=1; i<=min; i++) {

        if(num1%i==0 && num2%i==0) {
            GCD=i;
        }
    }

    printf("The GCD of these numbers is: %d", GCD);

    return 0;
}