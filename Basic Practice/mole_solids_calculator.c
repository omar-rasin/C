//program that does calculations for moles in solids

#include<stdio.h>

int main() {

    int type;
    float mass;
    float RFM;
    float moles;

    printf("1)find moles given mass and RFM\n2)Find mass given moles and RFM\n3)Find RFM given moles and mass\nEnter the number of your choice based on the options: ");
    scanf(" %d", &type); 


    switch(type){

        case 1:
            printf("Enter mass in grams: ");
            scanf("%f", &mass);
            printf("Enter the RFM: ");
            scanf("%f", &RFM);

            moles = mass/RFM;
            printf("The moles are %f", moles);
            break;
        
        case 2:
            printf("Enter the moles: ");
            scanf("%f", &moles);
            printf("Enter the RFM: ");
            scanf("%f", &RFM);

            mass = moles*RFM;
            printf("The mass is %f g", mass);
            break;

        case 3:
            printf("Enter the mass in grams: ");
            scanf("%f", &mass);
            printf("Enter the moles: ");
            scanf("%f", &moles);

            RFM = mass/moles;
            printf("The RFM is %f", RFM);
            break;


    }
    return 0;


}