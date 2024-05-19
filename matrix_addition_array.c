#include<stdio.h>

int main() {

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array1[rows][columns];
    int array2[rows][columns];
    int array3[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++ ){
            printf("Enter the value of array 1 at index[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter the value of array 2 at index[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            array3[i][j] = array1[i][j] + array2[i][j];
            printf("%d  ", array3[i][j]);
        }
        printf("\n");
    }

    return 0;
}