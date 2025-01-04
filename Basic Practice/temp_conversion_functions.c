#include<stdio.h>

void tofar(float temp);
void tocel(float temp);

int main() {

    int choice;
    float temp;

    printf("Enter the type of conversion you want to make\n1:Celcius to Farenheit\n2:Farenheit to Celcius\n");
    scanf("%d", &choice);

    if(choice==1){
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &temp);

        tofar(temp);

    }else if(choice==2){
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temp);

        tocel(temp);
    }

    return 0;
}

void tofar(float temp) {

    float farenheit = (temp*1.8) + 32;

    printf("%.1f degree celcius is %.1f farenheit", temp, farenheit);

}

void tocel(float temp){

    float celcius = (temp-32) / 1.8 ;

    printf("%.1f farenheit is %.1f degree celcius", temp, celcius);
}