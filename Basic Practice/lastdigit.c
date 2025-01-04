/*Enter a integer and print whether the last digit is odd or even*/

#include<stdio.h>

int main() {

    int num,lastdigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastdigit = num%10;

    if(lastdigit%2 == 0){
        printf("Last digit is Even");
    }else printf("Last digit is Odd");

    return 0;
}

