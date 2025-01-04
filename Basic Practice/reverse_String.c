//Write a program to reverse a String

#include<stdio.h>
#include<string.h>

int main() {

    char str[101];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for(int i = len-1; i>=0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}