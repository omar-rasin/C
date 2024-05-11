#include<stdio.h>
#include<math.h>

float simple(float principle, float rate, float time);
float compound(float principle, float rate, float time);

int main() {

    float principle, time, rate;
    int choice;
    float result =0;

    printf("Enter the total amount of money you have now in $: ");
    scanf("%f", &principle);

    printf("Enter the amount of time you will be keeping the money for in years: ");
    scanf("%f", &time);

    printf("Enter the rate of interest the bank is offering: ");
    scanf("%f", &rate);
    
    printf("Enter the type of interest the bank is offering\n1:Simple Interest\n2:Compound Interest\n");
    scanf("%d", &choice);

    if(choice==1){
        
        result = simple(principle, rate, time);
    }else if (choice==2){
        result = compound(principle, rate, time);
    }

    return 0;
}

float simple(float principle, float rate, float time) {
    float simpleInterest;

    simpleInterest = principle*(rate/100)*time;
    float total = simpleInterest+principle;

    printf("The simple interest you will receive is $%.1f and your total bank balance will be %%.1f", simpleInterest, total);

    return simpleInterest;
}

float compound(float principle, float rate, float time){
    float compoundInterest;
    float total;

   rate = rate/100;

   compoundInterest = principle*pow((1+rate),time);

   total = principle+compoundInterest;

   printf("Amount of interest received is $%.1f and total bank balance is $%.1f", compoundInterest, total);
}