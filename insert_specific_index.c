//Write a C program to insert element at a specific index in an array
  

#include<stdio.h>


int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    int index,element;

    for(int i=0; i<size; i++){
        printf("Enter the element at index[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the element you want to insert into the array: ");
    scanf("%d", &element);

    printf("Enter the index at which you want to insert %d in: ", element);
    scanf("%d", &index);

    if(index<0 || index>=size){
        printf("Invalid index");
   
        return 1;
    } else {
        for(int i=size-1; i>index ; i--){
            array[i] = array[i-1];
        }
    }

    array[index] = element;
    size++;

    printf("The new array is: \n");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

   

    return 0;

}





