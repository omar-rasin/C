

#include<stdio.h>

int func(int num1, int num2);

int main() {
   int num1,num2,result;
   
   scanf("%d", &num1);
   scanf("%d", &num2);
    
    result = func(num1, num2);
    
    return 0;
}

int func(int num1, int num2){
    int result = num1+num2+(num1*num2);
    
    if(result==111){
        printf("Yes");
    }else printf("No");
    
    return result;
}