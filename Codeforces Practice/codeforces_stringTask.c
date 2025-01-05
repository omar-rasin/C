/*Petya started to attend programming lessons. On the first lesson his task was to write a simple program. 
The program was supposed to do the following: in the given string, consisting if uppercase and lowercase 
Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly 
one string, it should return the output as a single string, resulting after the program's processing the initial 
string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase 
Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[101];
    char result[202];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int j = 0;

    //Converting the entire string to lowercase

    for(int i=0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    //Places . behind each consonant

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] != 'a'&& str[i] != 'e'&& str[i] != 'i'&& str[i] != 'o'&& str[i] != 'u') {
            result[j++] = '.';
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    //deleting vowels

    

    printf("%s\n", result);

    return 0;
}