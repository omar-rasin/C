#include<stdio.h>

int swap(int num1,int num2);

int main() {
    int num1,num2,result;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    result = swap(num1,num2);

    return 0;
}

int swap(int num1, int num2){
    int temp = num1;
    num1=num2;
    num2=temp;

    printf("After swapping, num1 is %d and num2 is %d", num1, temp);



}