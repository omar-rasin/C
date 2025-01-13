/*Given three distinct integers a, b, and c, find the medium number between all of them.

The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

For example, the median of 5,2,6is 5, since the minimum is 2and the maximum is 6.

Input
The first line contains a single integer t(1≤t≤6840) — the number of test cases.

The description of each test case consists of three distinct integers a, b, c(1≤a,b,c≤20).

Output
For each test case, output a single integer — the medium number of the three numbers.*/


#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    int a,b,c;
    int highest,lowest;

    for(int i=0; i<t; i++) {

        scanf("%d %d %d", &a, &b, &c);

        if(a>b && a>c) {
            highest = a;
        }else if(b>a && b>c) {
            highest = b;
        }else if(c>a && c>b) {
            highest = c;
        }

        if(a<b && a<c) {
            lowest = a;
        }else if(b<a && b<c) {
            lowest = b;
        }else if(c<a && c<b) {
            lowest = c;
        }

        if(a!= highest && a!= lowest) {
            printf("%d\n", a);
        }else if(b!= highest && b!= lowest){
            printf("%d\n", b);
        }else if(c!= highest && c!= lowest){
            printf("%d\n", c);
        }

    }
   
    return 0;
}