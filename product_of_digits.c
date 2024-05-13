#include<stdio.h>

void prod(int num);

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    prod(num);

    return 0;
}

void prod(int num){

 int product=1;
    while(num>0){
    int lastdigit;
   

    lastdigit = num%10;
    product = product*lastdigit;

    num= num/10;

    
    }
    printf("product of digits is %d", product);
}