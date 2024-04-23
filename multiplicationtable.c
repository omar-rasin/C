#include<stdio.h>

int main() {

    int N,till,product;

    printf("Output the multiplication table of: ");
    scanf("%d", &N);

    printf("Output till number multiplied by: ");
    scanf("%d", &till);


    for(int i=1;i<=till;i++){
       product = i*N;
        printf("%d X %d = %d\n", N,i,product);

    }
    return 0;


}