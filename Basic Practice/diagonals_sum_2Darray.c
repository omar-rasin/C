//Write a C program to find sum of diagonals in a 2D matrix array

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
            printf("Enter the value at index[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int sum_diagonal1 = 0; //diagonal1 is where column and index value is same(y=x)

    for(int i=0; i<rows; i++){

        for (int j=0; j<i+1; j++) {

            if(j==i) {

                sum_diagonal1 += array[i][j];
            }
        }
    }

    //int sum_diagonal2 = 0; //diagonal 2 is where y=-x

    //for(int i=0; i<rows ; i++){

        //for (int j=0; j<(rows-1-i); j++) {

            
        //}

        
    //}

    printf("Sum of diagonal 1 is: %d\n", sum_diagonal1);
    //printf("Sum of diagonal 2 is: %d", sum_diagonal2);

    return 0;

}