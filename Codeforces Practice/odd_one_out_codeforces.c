/*You are given three digits a, b, c . Two of them are equal, but the third one is different from the other two.
Find the value that occurs exactly once.

Input
The first line contains a single integer t(1≤t≤270) — the number of test cases.

The only line of each test case contains three digits a, b, c(0≤a, b, c≤9). 
Two of the digits are equal, but the third one is different from the other two.

Output
For each test case, output the value that occurs exactly once.

*/

#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a!=b && a!=c){
            printf("%d\n", a);
        }else if(b!=a && b!=c){
            printf("%d\n", b);
        }else if(c!=a && c!=b){
            printf("%d\n", c);
        }

    }
    return 0;
}