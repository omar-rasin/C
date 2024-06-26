#include<stdio.h>

void swap(int *number1, int *number2) {

    int temp = *number2;
    *number2 = *number1;
    *number1 = temp;
}

int main() {

    int number1 = 10;
    int number2 = 12;

    printf("%d, %d", number1, number2);

    swap(&number1, &number2);

    printf("\n%d, %d", number1, number2);

    return 0;
}