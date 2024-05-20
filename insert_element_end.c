//Write a C program to insert an element at the end of an array

#include<stdio.h>

int main() {

    int size,element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    array[size] = element; //placing element at the free position at the end of the array
    size++;

    printf("New array is:\n");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}