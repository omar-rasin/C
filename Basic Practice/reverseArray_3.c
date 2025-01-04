#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

   for(int i=0; i<size; i++) {

    printf("Enter the value at index[%d]", i);
    scanf("%d", &array[i]);

   }

    for(int i = 0; array[i] < (size-1); i++) {

        
    }

}