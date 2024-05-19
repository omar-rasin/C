#include<stdio.h>

int main() {

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter teh value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}