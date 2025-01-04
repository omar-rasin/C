/*Write a program that can return the addition and subtraction of two numbers using fuctions*/

#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main() {

    int a,b,result1,result2;

    scanf("%d", &a);
    scanf("%d", &b);

    result1 = add(a, b);
    result2 = sub(a, b);

    printf("%d, %d", result1, result2);

    return 0;
}

int add(int a, int b){

    int result = a+b;

    return result;
}

int sub(int a, int b){

    int result = a-b;

    return result;
}