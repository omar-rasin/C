//Write a program to compute the sum of the series 1/2, 1/3, 1/4, ..... 1/n

#include<stdio.h>

int main() {

    int n;
    float sum=0;
    scanf("%d", &n);

    for(int i=2;i<=n;i++){
        sum+=(1/(float)i);
    }
    printf("%.4f", sum);

    return 0;
}