#include<stdio.h>

int func(int num);

int main() {
    int num,result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = func(num);

   if(result == 1) {
        printf("Prime Number");
    } else {
        printf("Not a prime number");
}
return 0;
}


int func(int num){
    int result = 1;
    for(int i = 2; i <= (num / 2); i++){
        if(num % i == 0){
            result = 0;
            break;
        }
    }
    return result;
}
