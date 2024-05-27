//Write a program that takes input of a name and outputs the first character of the name

#include<stdio.h>

int main() {

    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    char firstcharacter = name[0];

    printf("The first character of your name is: %c", firstcharacter);

    return 0;
}