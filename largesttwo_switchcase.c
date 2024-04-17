#include<stdio.h>

int main() {

    float num1,num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(num1>num2){
        
        case 1:
            printf("Largest is %f\n", num1);
            break;
        case 0:
            printf("Largest is %f\n", num2);
            break;
    }
    return 0;
}