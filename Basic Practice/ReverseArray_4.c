#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++) {
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    
    int no_operations = size/2;

    for(int i=0; i<no_operations; i++) {
        int temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }

    for(int i=0; i<size; i++) {
        printf("%d  ", array[i]);
    }

    return 0;


}