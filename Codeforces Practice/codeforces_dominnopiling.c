/*You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares.
 You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following 
conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.

*/

#include<stdio.h>

int main() {

    int m,n;
    scanf("%d %d", &m, &n);

    int boardArea = m*n;

    int num;
    int x;

    boardArea%2 == x;

    if(x==0) {
        num = boardArea/2;
    }else if(x!=0){
        num - (boardArea - x) / 2;

    }

    printf("%d\n", num);

    return 0;
}