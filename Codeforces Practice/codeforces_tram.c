#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a,b;
    int count=0;
    long long max_count = -999999999999;

    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);

         count -=a;
         count +=b;

        if(count>max_count) {
            max_count = count;
        }

    }

    printf("%lld\n", max_count);

    return 0;


}