#include<stdio.h>

int func(int num);

int main() {

    int num,result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = func(num);

    return 0;
}

int func(int num){
    if(num%2==0){
        printf("Even");
    }else if(num%2!=0){
        printf("Odd");
    }
}
