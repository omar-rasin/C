#include<stdio.h>

int func(int num);

int main() {

    int num,result;

    printf("Please enter a number: ");
    scanf("%d", &num);

    result = func(num);

    return 0;


}

int func(int num){
    int reverseNum=0;
    int originalNum = num;
    
    while(num!=0){
    
    int lastdigit = num%10;
    reverseNum = reverseNum*10 + lastdigit;
    num=num/10;
 }

    if(reverseNum==originalNum){
        printf("Palindrome number");
    }else printf("Not a palindrome number");

    return reverseNum;
}