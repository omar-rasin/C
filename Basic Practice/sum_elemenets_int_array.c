//Write a C program to find the sum of elements in an integer array

#include<stdio.h>

int main() {

    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int sum = 0;

    for(int i=0; i<size; i++){
        sum+=array[i];
    }

    printf("Total sum of elements is: %d", sum);

    return 0;

}