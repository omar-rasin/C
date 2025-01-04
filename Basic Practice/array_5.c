#include<stdio.h>

int main() {

    int rows=3;
    int columns=3;

    int array[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns;j++){
            printf("Enter the value at index[%d][%d]: ", i, j);
        
           scanf("%d", &array[i][j]);
           
    }
    
}
    printf("The matrix is: \n");

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}