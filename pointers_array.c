//C program to input and print array elements using pointers

#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    int *ptr = array; //The pointer points to array[0]

    printf("Enter the elements in the array\n");
    
    for(int i =0; i<size; i++) {

        scanf("%d", ptr);

        ptr++; //Move pointer to next element


    }

    ptr = array; //Pointer points back to first element

    for(int i=0; i<size; i++) {

        printf("%d, ", *ptr);

        ptr++; //Move pointer to next element
    }

    return 0;
}