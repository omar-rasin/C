#include<stdio.h>

int main(){

    char alphabet;

    printf("Enter an Alphabet: ");
    fflush(stdin);
    scanf("%c", &alphabet);

    switch(alphabet){

        case 'A':
            printf("Vowel");
            break;
        case 'a':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("consonant");
            
    }
    return 0;
}