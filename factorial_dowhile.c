#include<stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int product=1;
    int i=1;

    do
    {
    product*=i;
    i++ ;   /* code */
    } while (i<=num);

    printf("Factrial of %d is %d", num, product);

    return 0;
    
}