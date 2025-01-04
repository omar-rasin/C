/*Write a function that takes an integer as an input and prints all of its divisors*/

#include<stdio.h>
void div(int num);

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    div(num);

    return 0;
}

void div(int num){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\t", i);
        }
        
    }
}