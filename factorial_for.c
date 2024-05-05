#include<stdio.h>

int main() {

    int num;
    int product=1;

    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        product*=i;
    }
    printf("Factorial of %d is %d", num, product);

    return 0;
}