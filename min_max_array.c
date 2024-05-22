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

    int max = array[0][0];
    int min = array[0][0];

    for(int i=0 ;i<rows; i++){
        for(int j=0; j<columns; j++){
            if(array[i][j]>max){
                max=array[i][j];
            }else{
                if(array[i][j]<min){
                    min=array[i][j];
                }
            }
        }
    }

    printf(" Largest in the array is: %d\n ", max);
    printf("Smallest in the array is : %d ", min);

    return 0;
}