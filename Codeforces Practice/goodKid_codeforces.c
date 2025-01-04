/*Slavic is preparing a present for a friend's birthday. He has an array a of n digits and the present will be the product 
 of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add 1 to exactly 
 one of his digits.

What is the maximum product Slavic can make?

Input

The first line contains a single integer t(1≤t≤10^4) — the number of test cases.

The first line of each test case contains a single integer n(1≤n≤9) — the number of digits.

The second line of each test case contains n space-separated integers ai(0≤ai≤9) — the digits in the array.

Output
For each test case, output a single integer — the maximum product Slavic can make, by adding 1
 to exactly one of his digits.

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {

        int n;
        scanf("%d", &n);

        int a[n];

        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        //take the array in ascending order

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

        int product = 1;

        a[0]++;

        for(int i=0; i<n; i++){
            product*=a[i];
        }

        printf("%d\n", product);

    }

    return 0;
}