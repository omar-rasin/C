#include<stdio.h>

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main() {

    float num1,num2;
    char type;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    fflush(stdin);

    printf("select the number for the type of operation\n1:+\n2:-\n3:*\n4:/\n");
    scanf("%c", &type);

    switch(type) {

        case '+':

        printf("%.1f", add(num1, num2));

        break;

        case '-':

        printf("%.1f", sub(num1, num2));

        break;

        case '*':

        printf("%.1f", mult(num1, num2));

        break;

        case '/':

        printf("%.1f", div(num1, num2));

        break;
    }

    return 0;
}

float add(float num1, float num2) {

    return num1+num2;
}

float sub(float num1, float num2) {
    
    return num1-num2;
}

float mult(float num1, float num2) {

    return num1*num2;
}

float div(float num1, float num2) {

    return num1/num2;
}
