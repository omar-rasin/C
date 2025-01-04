#include<stdio.h>

int main() {

    float a,b,c,d,e,f,g,h,avg,total,percent;

    //All exams were taken out of 100

    printf("Enter the marks you received in Maths-D: ");
    scanf("%f", &a);

    printf("Enter the marks you received in Add maths: ");
    scanf("%f", &b);

    printf("Enter the marks you received in Physics: ");
    scanf("%f", &c);

    printf("Enter the marks you received in Chemistry: ");
    scanf("%f", &d);

    printf("Enter the marks you received in Biology: ");
    scanf("%f", &e);

    printf("Enter the marks you received in Computer Science: ");
    scanf("%f", &f);

    printf("Enter the marks you received in Bangla: ");
    scanf("%f", &g);

    printf("Enter the marks you received in English: ");
    scanf("%f", &h);

    total = a + b + c + d + e + f + g + h;
    percent = (total/800)*100;

    printf("The total marks you received is %f\n", total);
    printf("Your percentage this year is %f\n", percent);

    if(percent>=90 && percent<=100){
        printf("Your grade is: A*");
    }else if (percent>=80 && percent<90 ){
        printf("Your Grade is: A");
    }else if (percent>=70 && percent<80){
        printf("Your Grade is: B");
    }else if (percent>=60 && percent<70){
        printf("Your Grade is: C");
    }else if (percent>=50 && percent<60){
        printf("Your Grade is: D");
    }else if (percent>=40 && percent<50){
        printf("Your Grade is: E");
    }else if (percent>=30 && percent<40){
        printf("Your Grade is: F");
    }else if (percent>100){
        printf("Wrong percentage, input again");
    }else printf("Fail");

    return 0;




    
}