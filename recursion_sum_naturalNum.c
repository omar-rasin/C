//Write a recursive function to print sum of first 10 natural numbers

#include<stdio.h>
int sum(int n) {

    if(n==0) {
        return 0;
    }else {

        int res = n + sum(n-1);

        return res; 
    }
}

int main() {

    int num;

    printf("Find out sum of the first how many natural numbers: ");

    scanf("%d", &num);

    printf("The sum of first %d natural numbers is: %d", num, sum(num));

    return 0;
}