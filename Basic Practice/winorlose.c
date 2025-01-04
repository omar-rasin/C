/*You and your friend decide to play a game where your friend types sume numbers blindfolded.
given the numbers, you will sum up the numbers 
If the sum is an even number, you win and if it is odd, your friend wins.

Input Format
Two lines:

First line contains a single integer N,to set the limit for the amount of numbers that can be inputted
Second line contains N space separated integers
N
n1 n2 n3 ..... nN
Output Format
Your winning status. If you win, print WON and if you lose, print LOST.*/

#include<stdio.h>

int main() {

    int N;
    int i;
    int num;
    int sum = 0;

    scanf("%d", &N);

    for(i=1;i<=N;i++){
        scanf("%d", &num);
        sum += num;
    }

    if(sum%2==0){
        printf("WON");
    }else printf("LOST");


    return 0;
}