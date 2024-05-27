//Write a function of your own that counts number of character in a string

#include<stdio.h>
void length(char name[]);

int main() {
    char name[100];

    printf("Enter your name: ");
    scanf("%[^\n]", name);

    length(name);

    return 0;

}

void length(char name[]){

    int count =0;

    for(int i=0; name[i] != '\0'; i++){
            count ++;
    }
    printf("The number of characters in your name is: %d", count);
}