#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {

        int a1,a2,b1,b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);

             int suneet_wins = 0;

        // Check all possible game scenarios
        // Case 1: Suneet flips a1, Slavic flips b1
        int suneet_rounds = 0;
        if (a1 > b1) suneet_rounds++;
        if (a2 > b2) suneet_rounds++;
        if (suneet_rounds > 1) suneet_wins++;

        // Case 2: Suneet flips a1, Slavic flips b2
        suneet_rounds = 0;
        if (a1 > b2) suneet_rounds++;
        if (a2 > b1) suneet_rounds++;
        if (suneet_rounds > 1) suneet_wins++;

        // Case 3: Suneet flips a2, Slavic flips b1
        suneet_rounds = 0;
        if (a2 > b1) suneet_rounds++;
        if (a1 > b2) suneet_rounds++;
        if (suneet_rounds > 1) suneet_wins++;

        // Case 4: Suneet flips a2, Slavic flips b2
        suneet_rounds = 0;
        if (a2 > b2) suneet_rounds++;
        if (a1 > b1) suneet_rounds++;
        if (suneet_rounds > 1) suneet_wins++;

        printf("%d\n", suneet_wins);
    }

    return 0;
}