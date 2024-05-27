//Modifying the scanf function to take input of strings with spaces
//Format: scanf(“%[^\n]”, stringName);

#include<stdio.h>

int main() {

    char name[50];

    printf("Enter your name: ");

    scanf("%[^\n]", name);

    printf("Your name is %s", name);

    return 0;
}