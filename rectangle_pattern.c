#include<stdio.h>

int main() {

    int row;
    int column;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &column);

    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}