#include<stdio.h>

int main() {

    int size;
    printf("Enter the number of marks to be input: ");
    scanf("%d", &size);

    float marks[size];

    for(int i=0; i<size; i++) {
        printf("Enter the value at index[%d]: ", i);
        scanf("%f", &marks[i]);
    }

    float max = marks[0];
    float min = marks[0];

    for(int i=0; i<size; i++) {
        if(marks[i]>max) {
            max = marks[i];
        }
    }

    for(int i=0; i<size; i++) {
        if(marks[i]<min) {
            min = marks[i];
        }
    }

    printf("The minimum mark is: %.1f\nThe maximum mark is: %.1f", min, max);

    return 0;
}