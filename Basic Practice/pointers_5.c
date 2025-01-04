#include<stdio.h>

int main() {

    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    for(int i = 0; i<5; i++) {

        printf("arr[%d] = %d\n", i, *(p+i));
    }

    for(int i=0; i<5; i++) {

        *(p+i) += 10;
    }

    for(int i=0; i<5; i++) {

        printf("Modified arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}