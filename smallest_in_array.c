#include<stdio.h>

int main() {

    int size;
    

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int smallest = array[0];

    
    for(int i=0; i<size; i++){
        if(array[i]<smallest){
            smallest = array[i];
        }
    }
    printf("The samllest element in the array is: %d", smallest);

    return 0;
}