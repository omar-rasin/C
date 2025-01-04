/*Given a two-digit positive integer n, find the sum of its digits.

Input
The first line contains an integer t(1≤t≤90) — the number of test cases.
The only line of each test case contains a single two-digit positive integer n(10≤n≤99).

Output
For each test case, output a single integer — the sum of the digits of */

#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {

        int n;
        scanf("%d", &n);

        int sum_digits = 0;

        while(n!=0) {

            sum_digits+=(n%10);

            n/=10;

        }

        printf("%d\n", sum_digits);
    }

    return 0;
}