//Program to find all roots of a quadratic equation.

#include<stdio.h>
#include<math.h>

int main() {

    float a,b,c,D,root1,root2; //ax^2 + bx + c

    printf("Enter the value of the coefficient of x^2 (a): ");
    scanf("%f", &a);

    printf("Enter the value of the coefficient of x (b): ");
    scanf("%f", &b);

    printf("Enter the value of (c): ");
    scanf("%f", &c);

    D = (b*b) - (4*a*c); //Discriminant = b^2 - 4ac

    if (D>0){
        root1 = (-b + sqrt(D)) /2*a; //roots = -b +/- sqrt(b^-4ac)/2a
        root2 = (-b - sqrt(D)) /2*a;

        printf("The two real and distinct roots of the quadratic equation are %f , %f", root1 , root2);


    }else if (D ==0){
        root1 = root2 = -b/(2*a);

        printf("The one real root of this quadratic equation id %f", root1);

    }else if (D<0){
        printf("Roots are imaginary");
    }
    return 0;

}