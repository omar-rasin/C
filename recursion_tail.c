//Example of a tail-recursion program
//tail recursion is where the recursion is the last thing to do and nothing comes after it

#include<stdio.h>

int func(int n) {

    if(n<1) {

        return;

    }else {

        printf("%d\t", n);

        func(n/2);
    }
}


int main() {

    int num;
    scanf("%d", &num);

    printf("%d\t", func(num));

    return 0;
}