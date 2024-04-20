#include<stdio.h>

int main() {

    int num1,num2,num3,num4,largest,i;

    scanf("%d\n", &num1);
    scanf("%d\n", &num2);
    scanf("%d\n", &num3);
    scanf("%d", &num4);

    switch(num1>num2 && num1>num3 && num1>num4){
        case 1:
            largest = num1;
            break;
        case 0:
    switch(num2>num1 && num2>num3 && num2>num4){
        case 1:
            largest = num2;
            break;
        case 0:
    switch(num3>num1 && num3>num2 && num3>num4){
        case 1:
            largest = num3;
            break;
        case 0:
            largest = num4;
            break;
    }
    }
    }
    printf("%d", largest);
    return 0;

}