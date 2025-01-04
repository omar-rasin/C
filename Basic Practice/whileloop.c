#include<stdio.h>

int main() {

    int marks = 0;
    int sum=0;

    while(1) {

        sum += marks;
        scanf("%d", &marks);

        if (marks==-1) {

            break;
        }

    }

    printf("The sum of marks is %d", sum);
    return 0;
}
