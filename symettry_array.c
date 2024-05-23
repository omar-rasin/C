#include<stdio.h>

int main() {

    int rows,columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++){
            printf("Enter the value at index[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int  symettrical = 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            if(array[i][j]!=array[j][i]){
                symettrical = 0;
                break;
            }
        }
    }

    if(symettrical){
        printf("Matrix is symettrical");
    }else printf("Matrix is Asymmetrical");

    return 0;
}