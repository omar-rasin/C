//Now we will try using the gets function

#include<stdio.h>

int main() {

    char name[100];

    printf("Enter your full name: ");

    gets(name);

    printf("Your name is:%s ", name );

    return 0;
}
//The drawback fo gets and scanf function is the buffer overflow 
//To overcome buffer overflow, we use the fgets function
