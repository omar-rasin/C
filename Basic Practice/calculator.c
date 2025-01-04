#include<stdio.h>

int main() {

    float num1,num2,result;
    char sign;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the sign of the operation you want to conduct: ");
    fflush(stdin);
    scanf("%c", &sign);

     switch (sign) {

        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            printf("Invalid Operator");
     }
     printf("After the operation the result is %f", result);
     return 0;
}