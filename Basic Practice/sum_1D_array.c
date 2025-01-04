//Write a program to find sum of elements in a one dimensional array

#include<stdio.h>

int main() {

    int size;
    int sum=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size; i++){
        sum+=array[i];
    }
    printf("Sum of all elements in the array is: %d", sum);

    return 0;
}