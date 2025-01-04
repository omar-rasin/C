#include<stdio.h>

int main() {

    int i,n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=n;i>=1;i--){
        if(i%2 !=0){
            sum+=i;
        }
    }
    printf("Sum of odd numbers from 1 to your number is %d", sum);
    return 0;

}