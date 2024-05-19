#include<stdio.h>

int main() {

    int nums[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i=0; i<9-1; i++) {

        for (int j=0; j<9-1; j++) {

            if (nums[j]>nums[j+1]) {

                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for (int i=0; i<9; i++) {

        printf("%d ", nums[i]);
    }

    return 0;
}