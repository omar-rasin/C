#include<stdio.h>

int main() {

    int num1,num2;
    float num3,num4,sumint,diffint,sumfloat,difffloat;

    scanf("%d %d", &num1,&num2);
    scanf("%f %f", &num3,&num4);

    sumint = num1+num2;
    diffint = num1-num2;
    sumfloat = num3+num4;
    difffloat = num3-num4;

    printf("%d %d\n", (int)sumint , (int)diffint);
    printf("%.1f %.1f", sumfloat , difffloat);

    return 0;

}