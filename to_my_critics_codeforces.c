/*Suneet has three digits a, b, and c.
Since math isn't his strongest point, he asks you to determine if you can choose any two digits to make a sum greater or equal to 10.
Output "YES" if there is such a pair, and "NO" otherwise.

Input
The first line contains a single integer t
 (1≤t≤1000) — the number of test cases.
The only line of each test case contains three digits a, b, c
 (0≤a,b,c≤9).

Output
For each test case, output "YES" if such a pair exists, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

*/

#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){

        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        if(a+b>=10 || a+c>=10 || b+c>=10 ){
            printf("YES\n");
        }else printf("NO\n");

    }
    return 0;
}