#include<stdio.h>

int main() {

    int x = 4;
    
    int *pX = &x;

    int y = *pX;

    printf("%d", pX);
    printf("%d", y);

    return 0;
}