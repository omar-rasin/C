/*You are given two integers x and y.Output two integers: the minimum of x and y followed by the maximum of x and y.
Input 
The first line contains a single integer t (1≤t≤100) — the number of test cases.

The only line of each test case contains two space-separated integers x and y (0≤x,y≤9).

Output
For each test case, output two integers: the minimum of x
 and y, followed by the maximum of xand y.
*/

#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++){
        int x,y;

        scanf("%d %d", &x, &y);

        if(x>y){
            printf("%d %d\n", y, x);
        }else printf("%d %d\n", x, y);
    }
    return 0;

}