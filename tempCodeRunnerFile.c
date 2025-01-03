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