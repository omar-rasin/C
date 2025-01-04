#include<stdio.h>

int main(){

    float i,p,r,t,x,a;

    printf("Please enter the amount of money you will be depositing to the bank: ");
    scanf("%f", &p);
    
    printf("Please enter the rate of interest the bank is offering: ");
    scanf("%f", &x);

    printf("Please enter the number of years you will be keeping the money in the bank for: ");
    scanf("%f", &t);

    r = x/100;
    i = p*r*t;
    a = i+p;

    printf("The total amount of simple interest given by the bank will be %f\n", i);
    printf("Therefore the total amount of money you will have after this duration of time will be %f", a);

    return 0;

}