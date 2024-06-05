/*Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will 
not exceed 10^3.

Output
Output the given word after capitalization.

*/

#include<stdio.h>
#include<string.h>

int main() {

    char word[1000];
    scanf("%s", word);

   

        if(word[0] >= 'a' && word[0] <= 'z') {

            word[0] -= ('a' - 'A');
        }

        printf("%s\n", word);

        return 0;
    
}