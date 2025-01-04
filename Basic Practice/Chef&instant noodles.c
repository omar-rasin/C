#include<stdio.h>

int main(){

    int x,y,z;

    printf("Enter the number of stoves present: ");
    scanf("%d", &x);

    printf("Enter the amount of minutes the chef has: ");
    scanf("%d", &y);

    z = x*y;

    printf("In this amount of time , the amount of meals the chef can prepare is %d", z);

    return 0;

}