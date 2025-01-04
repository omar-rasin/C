#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int reverseArray[size];

    for(int i=0;i <size;i++) {
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

      int k = 0; 
         for (int i = size - 1; i >= 0; i--) {
            reverseArray[k] = array[i];
        
        k++; 
    }


    for(int i=0; i<size; i++) {

        printf("%d\t", reverseArray[i]);
    }

    return 0;
}