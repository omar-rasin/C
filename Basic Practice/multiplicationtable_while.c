#include<stdio.h>

int main() {

    int num;
    int i=1;
    int product;

    scanf("%d", &num);

    while(i<=10){
        product = i*num;
        printf("%d x %d = %d", num, i, product);
        printf("\n");
        i++;
    }
    
    return 0;
}