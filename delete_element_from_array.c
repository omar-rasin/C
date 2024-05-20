//Write a C program to delete an element from an array

#include<stdio.h>

int main() {

    int position;

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size ; i++){
        printf("Enter the element at index[%d]: ", i);
        scanf("%d", &array[i]);

    }

    printf("Enter the position of the index you want to delete(0-based index): ");
    scanf("%d", &position);

    if(position<0 || position>size-1){
        printf("Invalid position");

        return 1;

    }else for(int i=position; i<=size; i++){
        array[i] = array[i+1];
    }

    size--;

    printf("After deletion the array is: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;

}