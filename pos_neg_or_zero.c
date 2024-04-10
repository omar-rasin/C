#include<stdio.h>

int main(){

    float x;

    printf("Enter a number: ");
    scanf("%f", &x);

    if(x>0){
        printf("Positive\n");
    }else if (x<0){
        printf("Negative\n");
    }else printf("Zero");

    return 0;
}