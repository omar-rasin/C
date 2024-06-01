#include<stdio.h>

int fact(int num);

int main() {

    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d", num, fact(num));

    return 0;
}

int fact(int num) {

    if (num==0) {

        return 1;
    } else {

    return num * fact(num-1);
    }

}