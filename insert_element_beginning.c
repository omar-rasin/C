//Write a C program to insert a element at beginning of an array

#include<stdio.h>

int main() {

    int element;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter element at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    int arrayB[size++];

    for(int i=0; i<size-1; i++){
        arrayB[i+1] = array[i]; //right shift
    }

    arrayB[0] = element;

    printf("The new array is: \n");

    for(int i=0; i<size; i++){

        printf("%d ", arrayB[i]);
    }
    printf("\n");

    return 0;
}