#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {

        int a;
        scanf("%d", &a);

        int digits[4];

        for(int j=3; i>=0; i--) {
            digits[j] = a % 10;
            a/=10;
        }

        if(digits[0] != 1 && digits[1] != 0) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }
    return 0;
}