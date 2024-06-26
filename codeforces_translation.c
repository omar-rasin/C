/*The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish 
word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, 
a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». 
Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist
unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

*/

#include<stdio.h>
#include<string.h>

int main() {

    char s[101];
    scanf("%s", s);

    char t[101];
    scanf("%s", t);

    int t_len = strlen(t);
    int s_len = strlen(s);

    if(t_len != s_len) {
        printf("NO\n");

        return 0;
    }

    for(int i=0; i<s_len; i++) {

        if(s[i] != t[s_len -1 -i]) {
            printf("NO\n");
            return 0;
        }

        
    }

    printf("YES\n");
    return 0;
}