#include<stdio.h>
#include<math.h>

int main() {

    float a,p,r,t,x,y,ci;

    printf("Please enter the amount of money you are depositing to the bank: ");
    scanf("%f", &p);

    printf("Please enter the number of years you will be keeping the money the bank: ");
    scanf("%f", &t);

    printf("Please enter the rate of interest offered by the bank: ");
    scanf("%f", &x);

    r = x/100;
    y = 1 + r;
    a =p*pow(y,t);

    ci = a - p;

    printf("After these years,the total amount of money in the bank will be %f\n", a);
    printf("and the amount of compount interest received from the bank will be %f", ci);

    return 0;










}