#include<stdio.h>

int main() {

    int n,i;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%3!=0 && i%5!=0){
            printf("%d\n",i);
        }else if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        }else if(i%3==0){
            printf("Fizz\n");
        }else if(i%5==0){
            printf("Buzz\n");
        }
    }
    return 0;
}