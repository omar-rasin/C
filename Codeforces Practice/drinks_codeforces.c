#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int p;
    int sum_volume=0;

    for(int i=0; i<n; i++) {

        scanf("%d", &p);

        sum_volume+=p;
        
    }
    
    int total_volume = n*100;

    double percent = (double)sum_volume / total_volume * 100;

    printf("%f\n", percent);

    return 0;
}