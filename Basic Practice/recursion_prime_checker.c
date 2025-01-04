//C Program to Check whether a Number is Prime or Not using Recursion


#include<stdio.h>
int isprime(int num, int i) {

    if(i==1) {
        return 1;
    }else if(num%i==0) {
        return 0;
    }else {
        return isprime(num, i-1);
    }
}

int main() {

    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = isprime(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;

}