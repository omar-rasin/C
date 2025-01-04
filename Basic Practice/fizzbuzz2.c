//multiple of 2=fizz,multiple of 5=buzz,both=fizzbuzz,infinitely until input is -1

#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    while(1){

        if(n==-1){
            break;
        }
        if(n%2==0 && n%5==0){
            printf("Fizzbuzz\n");
        }else if(n%2==0){
            printf("Fizz\n");
        }else if(n%5 == 0){
            printf("Buzz\n");
        }
        scanf("%d", &n);
    }
    return 0;
}