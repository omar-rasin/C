//Write a program to find the lowest age among a group of different ages

#include<stdio.h>

int main() {

    int size;
    printf("Enter the total number of people: ");
    scanf("%d", &size);

    int ages[size];

    for(int i=0; i<size; i++){
        printf("Enter the age of the person at index[%d]: ", i);
        scanf("%d", &ages[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(ages[j]>ages[j+1]){
                int temp = ages[j];
                ages[j] = ages[j+1];
                ages[j+1] = temp;
            }
        }
    }

    printf("The smallest age is: %d", ages[0]);

    return 0;
}