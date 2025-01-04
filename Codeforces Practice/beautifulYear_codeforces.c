#include<stdio.h>
#include<string.h>

int main() {

    int y;
    scanf("%d", &y);

    y++;

        while (1) {
        int dig1 = y / 1000; 
        int dig2 = (y / 100) % 10; 
        int dig3 = (y / 10) % 10;
        int dig4 = y % 10; 

        
        if (dig1 != dig2 && dig1 != dig3 && dig1 != dig4 &&
            dig2 != dig3 && dig2 != dig4 && dig3 != dig4) {
            printf("%d\n", y); 
            break;
        }

        y++; 
    }

    return 0;
}

