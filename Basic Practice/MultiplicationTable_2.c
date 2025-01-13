#include<stdio.h>

int main() {

  

    for(int i=1; i<=10; i++) { //1+(10+1)+10
        for(int j=1; j<=10; j++) { //1 + (10+1) + 10
            printf("%d x %d = %d\n", i, j, i*j); //10
        }
    }

    /**
     * inner loop: 1 + (10 + 1) + 10 + 10 * 1
     * outer loop: 1 + (10 + 1) + 10 + 10 * ( inner loop )
     *             1 + (10 + 1) + 10 + 10 * ( 1 + (10 + 1) + 10 + 10 * 1 )
     *             1 + (n + 1) + n + n *(1+(n+1)+n+n*1)
     *            = 3n^2 + 3n + 2
     *              Time complexity : O(n^2)
     */

    return 0;
}

//