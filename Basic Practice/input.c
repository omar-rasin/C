#include<stdio.h>

int main() {

    char x, a;

    printf("Please enter the value of x: ");
    scanf("%c", &x);

    fflush(stdin);

    printf("Please enter the value of a: ");
    scanf("%c", &a);

    printf("%c, %c", x, a);

    return 0;
}