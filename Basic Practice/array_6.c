#include<stdio.h>

int main() {

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns of columns: ");
    scanf("%d", &columns);
    
    int matrix[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter the value at index[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }   
    }

    printf("Your matrix is: \n");

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}