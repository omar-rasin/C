#include<stdio.h>

int main() {

    int numbers[4][3] ;

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 3;
    numbers[1][1] = 4;
    numbers[1][2] = 3;
    numbers[2][0] = 4;
    numbers[2][1] = 5;
    numbers[2][2] = 4;
    numbers[3][0] = 5;
    numbers[3][1] = 6;
    numbers[3][2] = 5;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i =0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}