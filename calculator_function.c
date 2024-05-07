/*Write a function to implement a calculator that takes two numbers as an input, then asks the user which operation to perform
and displays the result*/

#include<stdio.h>

    int add(int num1, int num2);
    int sub(int num1, int num2);
    int multiple(int num1, int num2);
    int div(int num1, int num2);


    int main(){
        int num1,num2,result1,result2,result3,result4;
        int type;

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("select the number for the type of operation\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n");
        scanf("%d", &type);

        if(type==1 ){
            result1 = add(num1, num2);
            printf("%d", result1);
        }else if(type==2){
            result2 = sub(num1, num2);
            printf("%d", result2);
        }else if(type==3){
            result3 = multiple(num1, num2);
            printf("%d", result3);
        }else if(type==4){
            result4 = div(num1, num2);
            printf("%d", result4);
        }
        return 0;
    }

    int add(int num1, int num2){
        int result=num1+num2;
        return result;
    }

    int sub(int num1, int num2){
        int result=num1-num2;
        return result;
    }

    int multiple(int num1, int num2){
        int result=num1*num2;
        return result;
    }

    int div(int num1, int num2){
        int result=num1/num2;
        return result;
    }

