//C program that calculates the sum of elements in an array using recursion

#include<stdio.h>
int arraySum(int array[], int size) {

    if(size<=0) {

        return 0;

    }else {

        return array[0] + arraySum(array+1,size-1);
    }

}

int main() {

    int size;
    

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int sum = arraySum(array, size );

    printf("Sum of elements in the array is: %d", sum);

    return 0;
}