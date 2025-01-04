//Using fgets to take input of strings
//The format of using fgets is: fgets(str, sizeof(str), stdin);
#include<stdio.h>

int main() {

    char name[100];

    printf("Enter your name: ");

    fgets(name, sizeof(name), stdin);

    printf("Your name is %s", name);

    return 0;
}