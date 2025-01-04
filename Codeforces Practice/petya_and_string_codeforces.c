/*Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and 
lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, 
that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings 
are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the
strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

*/

#include<stdio.h>
#include<string.h>

int main() {

    char str1[101];
    char str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    //convert all uppercase of the string to lowercase

    for(int i=0; str1[i] != '\0'; i++) {

        if(str1[i] >= 'A' && str1[i] <= 'Z') {

            str1[i] += ('a' - 'A');
        }
    }

    for(int i=0; str2[i] != '\0'; i++) {

        if(str2[i] >= 'A' && str2[i] <= 'Z') {

            str2[i] += ('a' - 'A');
        }
    }

    printf("%d\n", strcmp(str1,str2));

    return 0;


}