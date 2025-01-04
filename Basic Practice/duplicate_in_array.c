//Write a program in C to count the total number of duplicate elements in an array.

#include<stdio.h>

int main() {

    int size; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d] : ", i);
        scanf("%d", &array[i]);
    }

    int count = 0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]==array[j]){
                count++;
            }
        }
    }

    printf("Duplicates : %d", count);

    return 0;

}