#include<stdio.h>

int main() {

    int i,n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("Sum of even numbers from 1 to your number is %d\n", sum);
    return 0;
}