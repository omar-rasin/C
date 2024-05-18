#include<stdio.h>

int main() {

    float height[] = {4.11, 5.2, 5.5, 5.8, 5.11, 5.118, 5.119, 6.16, 6.2, 6.3};

    for(int i=0; i<sizeof(height) / sizeof(height[0]); i++){
        printf("%.1fft\n", height[i]);
    }
    return 0;
}