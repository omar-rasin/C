#include<stdio.h>

int main(){

    char grade;

    printf("Please enter your grade: ");
    fflush(stdin);
    scanf("%c", &grade);

    switch(grade){

        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Nice try");
            break;
        case 'D':
            printf("Needs improvement");
            break;
        default:
            printf("Invalid Grade");

    }

    return 0;
}