#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int reverseArray[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size; i++){
        reverseArray[i] = array[size-1-i]; 
    }

    printf("Reversed array is: ");
    for(int i=0; i<size; i++){
        printf("%d ", reverseArray[i]);
    }
    printf("\n");

    return 0;
}