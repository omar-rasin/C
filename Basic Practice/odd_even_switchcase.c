#include<stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch ( num%2 == 0){
        case 1:
            printf("Even");
            break;
        case 0:
            printf("Odd");
            break;
    }
    return 0;
}