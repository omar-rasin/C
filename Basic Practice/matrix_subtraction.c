#include<stdio.h>

int main() {

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array1[rows][columns];
    int array2[rows][columns];
    int result[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter index[%d][%d] of array 1: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
     for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter index[%d][%d] of array 2: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            result[i][j] = array1[i][j] - array2[i][j];
            printf("%d ", result[i][j]);
        }   
        printf("\n");
    }

    return 0;
}