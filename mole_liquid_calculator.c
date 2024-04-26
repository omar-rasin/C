#include<stdio.h>

int main() {

    int type;
    float volume;
    float conc,mole;

    printf("1)Find mole given volume and concentration\n2)Find volume given mole and concentraion\n)3)Find concentration given mole and volume\nPlease enter the number of your choice: ");
    scanf("%d", &type);

    switch(type){

        case 1:
            printf("Please enter the volume in dm^3: ");
            scanf("%f", &volume);
            printf("Please enter the concentration in mol/dm^3: ");
            scanf("%f", &conc);

            mole = volume*conc;
            printf("The number of moles is %f mol", mole);
            break;
        case 2:
            printf("Please enter the conc in mol/dm^3: ");
            scanf("%f", &conc);
            printf("Please enter the mole : ");
            scanf("%f", &mole);

            volume = mole/conc;
            printf("Volume is %f dm^3", volume);
            break;
        case 3:
            printf("Please enter the volume in dm^3: ");
            scanf("%f", &volume);
            printf("Please enter the mol : ");
            scanf("%f", &mole);

            conc = mole/volume;
            printf("Concentration is %f mol/dm^3", conc);
            break;
    }

return 0;

}