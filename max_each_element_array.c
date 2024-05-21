//Write a C program to find the maximum element in each row of a 2D matrix array

#include<stdio.h>

int main() {

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter the values at index[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int max;

    for(int i=0; i<rows; i++){
        max = array[i][0];

        for(int j=1; j<columns; j++){
            if(array[i][j]>max){
                max=array[i][j];
            }

        }

        printf("The max value at row %d is %d\n", i, max);
    }

    return 0;

}