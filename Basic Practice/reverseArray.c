//Reverse an array given

#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0;i<size;i++) {

        printf("Enter the value at index[%d]: ", i);

        scanf("%d", &array[i]);
    }

    int reverseArray[size];

    for(int i=0; i<size;i++) {

        reverseArray[i] = array[size-1-i];

    }

    for(int i=0; i<size; i++) {

        printf("%d\t", reverseArray[i]);

    }

    return 0;
}