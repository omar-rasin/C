#include<stdio.h>

int main() {

    int num;
    int count=0;

    scanf("%d", &num);

    while(num!=0){
        num=num/10;
        count++;
    }
    printf("Number of digits are %d", count);

    return 0;
    
}