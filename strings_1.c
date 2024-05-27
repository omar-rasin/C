//String is array of characters
//Data type is char 
//Declaration of string: char stringName[size]; for example: char name[10]
//String always ends with a null '\0' character
//Initialization of strings: char stringName[size] = "x"
//Examples of initialized strings: "Omar", "12345" , "Omar Rasin"
//Second way of initializing string: char strName[size] = {'o','m','a','r','\0'}
//In above example, it is also okay if we dont enter size
//Size of a string is number of characters + 1 , which is the null character
//Format specifier for strings is '%s'

#include<stdio.h>

int main() {

    char name[20];

    printf("Enter your name: ");
    scanf("%s", name );

    printf("Your name is: :  %s", name);

    return 0;
}
//In the code above , if we input two names i.e first and last name 
//separated by space, it will output only first name 
//scanf will not consider space and put a null '\0' character in space of 'space'
//To overcome this drawback of scanf, we use gets function


