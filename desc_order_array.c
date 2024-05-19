#include<stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int num[size];

    for(int i=0; i<size; i++){
        printf("Enter the value at index[%d]: ", i);
        scanf("%d", &num[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(num[j]<num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;

            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ", num[i]);
    }

    return 0;
}