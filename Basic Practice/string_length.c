//Write a program to output the length of a string
// The predefined function to find length is: strlen(stringName)
//String.h header file is needed to use strlen function

#include<stdio.h>
#include<string.h>

int main() {

    char name[50];
    
    printf("Enter your name: ");
    scanf("%[^\n]", name);

    int length = strlen(name);

    printf("The length of your name is: %d", length);

    return 0;

}
