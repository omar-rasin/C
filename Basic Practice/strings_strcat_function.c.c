//concatenates(joins) strings by using the predefined function strcat
//Format: strcat(string1, string2);

#include<stdio.h>
#include<string.h>

int main() {

    char firstname[50];
    char lastname[50];
    char fullname[100];

    printf("Enter your first name: ");
    gets(firstname);

    printf("Enter your last name: ");
    gets(lastname);

    fullname[0] = '\0';

    strcat(fullname, firstname);
    strcat(fullname, " ");
    strcat(fullname, lastname);

    printf("Your full name is: %s", fullname);

    return 0;
}