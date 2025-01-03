#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int prev_x,prev_y;
    int groups = 1;

    scanf("%d%d", &prev_x, &prev_y);


    int x,y; //indicating plus and minus(-ve = 1 , +ve = 0)

    for(int i=1; i<n; i++) {

        scanf("%d%d", &x, &y);
    }

    if (x != prev_x || y != prev_y) {
            groups++; // New group formed
    }

    prev_x = x;
    prev_y = y;
    
    printf("%d\n", groups);
    
    return 0;
}