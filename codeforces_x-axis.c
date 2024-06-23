/*You are given three points with integer coordinates x1, x2, and x3 on the X axis (1≤xi≤10). You can choose any point with an integer 
coordinate a on the X axis. Note that the point a may coincide with x1, x2, or x3.

 Let f(a)be the total distance from the given points to the point a. Find the smallest value of f(a).

The distance between points a and b is equal to |a−b|. For example, the distance between points a=5and b=2is 3.

Input
Each test consists of multiple test cases. The first line contains a single integer t(1≤t≤103) — the number of test cases. 
Then follows their descriptions.

The single line of each test case contains three integers x1, x2, and x3 (1≤xi≤10) — the coordinates of the points.

Output
For each test case, output the smallest value of f(a)
.

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {

        int x1, x2, x3;
        scanf("%d %d %d", &x1, &x2, &x3);

        int x = 0;

        int a = abs(x1-0) + abs(x2-0) + abs(x3-0);

        int smallest = a;

        while(x<=10) {

            int y = abs(x1-x) + abs(x2-x) + abs(x3-x);
            x++;

            if(y<smallest) {
                smallest = y;
            }
        }

        printf("%d\n", smallest);
    }

    return 0;
}