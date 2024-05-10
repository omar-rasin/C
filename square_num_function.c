#include<stdio.h>

int func(int num);

int main() {
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result = func(num);

    return 0;

}

int func(int num){
    int power = num*num;
    printf("The sqaure of %d is %d", num, power);
    return power;
}
