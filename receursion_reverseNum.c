//C Program to find reverse of a number using recursion

#include<stdio.h>
#include<math.h>

int reverse(int num);

int main() {

    int num;

    printf("Enter a number: ");
    
    scanf("%d", &num);

    printf("The reverse of %d is: %d", num, reverse(num));

    return 0;
}

int reverse(int num) {

    int digit = (int) log10(num);

    if(num==0) {
        
        return 0;

    }else {

        return ((num%10) * pow(10, digit) + reverse(num/10));
    }
}
