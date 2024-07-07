//Pointers being used to dereference in loops 

#include<stdio.h>

int main() {

    int array[3] = {1,2,3};

    int *p = array;

    for(int i=0; i<3; i++) {

        printf("The value stored at array[%d]: %d\n", i, *(p+i));
    }

    return 0;
}