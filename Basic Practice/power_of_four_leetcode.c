/*Power of four
Given an integer n, return true if it is a power of four. Otherwise, return false.
An integer n is a power of four, if there exists an integer x such that n == 4^x.
*/

#include<stdio.h>
#include<stdbool.h>

bool ispower(int n);

int main() {

    int n;
    scanf("%d", &n);

    bool result = ispower(n);

    if(result){
        printf("true");
    }else printf("false");

    return 0;
}

bool ispower(int n){
    if(n<=0){
        return false;
    }

    while(n%4==0){
        n=n/4;
    }

    return n==1;
}
