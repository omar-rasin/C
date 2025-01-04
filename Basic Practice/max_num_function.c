#include<stdio.h>
float max(float num1, float num2);

int main() {

    float num1,num2,result;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter another number: ");
    scanf("%f", &num2);

    result = max(num1,num2);

    return 0;

}
float max(float num1, float num2){

    if(num1>num2){
        printf("Greater: %f\n", num1) && printf("Smaller: %f\n", num2);
       

    }else
     printf("Greater: %f\n", num2) &&printf("Smaller: %f\n", num1);
     

}