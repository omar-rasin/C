#include<stdio.h>

int main() {

    int size;
    int product = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size; i++){
        product*=array[i];
    }
    printf("The products of all elements in the array is: %d", product);

    return 0;
}