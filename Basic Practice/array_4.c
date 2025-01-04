#include<stdio.h>

int main() {

    int numbers[5][5];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][3] = 3;
    numbers[0][4] = 4;
    numbers[1][0] = 5;
    numbers[1][1] = 6;
    numbers[1][2] = 7;
    numbers[1][3] = 8;
    numbers[1][4] = 9;
    numbers[2][0] = 8;
    numbers[2][1] = 7;
    numbers[2][2] = 6;
    numbers[2][3] = 5;
    numbers[2][4] = 4;
    numbers[3][0] = 3;
    numbers[3][1] = 2;
    numbers[3][2] = 1;
    numbers[3][3] = 2;
    numbers[3][4] = 3;
    numbers[4][0] = 4;
    numbers[4][1] = 5;
    numbers[4][2] = 6;
    numbers[4][3] = 7;
    numbers[4][4] = 8;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0; j<i+1; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}