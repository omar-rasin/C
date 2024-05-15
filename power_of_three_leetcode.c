/*Power of three
Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3^x.
*/

#include<stdio.h>
#include<stdbool.h>

bool ispower(int n);

int main() {

    int n;
    scanf("%d", &n);

    bool result =  ispower(n);

    if(result){
        printf("true");
    }else printf("false");

}

bool ispower(int n){
    if(n<=0){
        return false;
    }

    while(n%3==0){
        n=n/3;

    }

    return n==1;
}