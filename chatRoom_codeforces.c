/*Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and 
decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello
if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, 
if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", 
it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya 
managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, 
its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

*/

#include<stdio.h>
#include<string.h>

int main() {

    char s[101];
    scanf("%s", &s);

    int h=0,e=0,l=0,o=0;

    int len = strlen(s);

    if(len<=5) {
        printf("NO");
    }else {

        for(int i=0; s[i] != '\0'; i++) {

            if(s[i] == 'h' ||s[i] == 'H' ) {
                h++;
            }else if(s[i] == 'e'||s[i] == 'E' ) {
                e++;
            }else if(s[i] == 'l'||s[i] == 'L' ) {
                l++;
            }else if(s[i] == 'o'||s[i] == 'O' ) {
                o++;
            }
        }

        
    }if(h>=1 && e>=1 && l>=2 && o>=1) {
        printf("YES");
    }

    return 0;

}