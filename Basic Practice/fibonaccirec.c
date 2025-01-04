#include<stdio.h>

int fib(int num);

int main() {

    int num;

    printf("please enter a number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {

        printf("%d\t", fib(i));
    }

    return 0;
}

int fib(int num) {

    if (num==1) {

        return 0;

    } else if (num==2) {

        return 1;

    } else {

    return fib(num-1) + fib(num-2);
    }

}