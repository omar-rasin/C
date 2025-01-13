/*Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation 
contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given 
number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (
without the quotes).

*/

#include<stdio.h>

int main() {

    //Creating a list of lucky numbers:

    int lucky[1005];
    int j= 0;

    for(int i=1; i<=1000; i++) {

        int num = i, isLucky = 1;

        while(num>0) {
            if(num%10 != 4 && num%10 != 7) {
                isLucky = 0;
                break;
            }
            num/=10;
        }

        if(isLucky){
            lucky[j] = i;
            j++;
        }

        
    }

    int n;
    scanf("%d", &n);

    for(int i=0; i<j; i++) {

        if(n%lucky[i] == 0) {
            printf("YES");
            
            return 0;
        }
    }

    printf("NO");


    return 0;

}