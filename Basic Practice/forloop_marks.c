#include<stdio.h>

int main() {

    int marks;
    int sum=0;

    printf("Enter the marks, -1 to terminate: ");
    scanf("%d", &marks);

    while(marks!=-1){
        
        sum+=marks;
        printf("Enter the marks, -1 to terminate: ");
        scanf("%d", &marks);

    }

    printf("The sum of marks is %d", sum);
    return 0;
}