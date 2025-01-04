#include<stdio.h>

int main() {

    int rows;
    int columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=(rows-i);j++){
            printf(" ");
        }for(int k=1;k<=columns;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}