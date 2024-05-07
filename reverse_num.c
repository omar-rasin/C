// write a program that reverses a given number

#include<stdio.h>

int main() {

    int num, lastDigit, reverseNum = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    while (num!=0) {

        lastDigit = num%10;
        reverseNum = reverseNum*10 + lastDigit;
        num/=10;
    }

    printf("%d", reverseNum);

    return 0;
}