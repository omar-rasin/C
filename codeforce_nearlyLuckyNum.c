/*Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the 
lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. 
He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 10^18).

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).*/

#include<stdio.h>

int main() {

   long long int n;
   scanf("%lld", &n);

   int count=0;

   while(n>0) {

    if(n%10==4 || n%10==7) {
        count+=1;
        
    }
    n=n/10;
   }

   if(count==4 || count==7) {
    printf("YES");
   }else printf("NO");

   return 0;
}