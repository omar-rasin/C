#include<stdio.h>

int main() {

    int num,i;

    printf("Odd numbers from 1 till: ");
    scanf("%d", &num);

    for (i=1;i<=num;i++){
        if(i%2 != 0){
            printf("%d\t", i);
        }
    }
    return 0;
}