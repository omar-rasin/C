/*You are given three digits a,b,and c. Determine whether they form a stair, a peak, or neither.
A stair satisfies the condition a<b<c.
A peak satisfies the condition a<b>c.
Input
The first line contains a single integer t(1≤t≤1000) — the number of test cases.

The only line of each test case contains three digits a, b, c(0≤a, b, c≤9).

Output
For each test case, output "STAIR" if the digits form a stair, "PEAK" if the digits form a peak, and "NONE"
 otherwise (output the strings without quotes).*/

#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++){
        int a,b,c;

        scanf("%d %d %d", &a, &b, &c);

        if(a<b && b<c){
            printf("STAIR\n");
        }else if(a<b && b>c){
            printf("PEAK\n");
        }else printf("NONE\n");
    }
    return 0;
}