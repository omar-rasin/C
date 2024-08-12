//C program to input and print array elements using pointers

#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    int *ptr = array;

    printf("Enter the elements of the array: \n");
    for(int i=0; i<size; i++) {

        scanf("%d", (ptr+i));
    }

    printf("Array Elements: \n");
    for(int i=0; i<size; i++) {

        printf("%d ", *(ptr+i));
    }
    return 0;
}