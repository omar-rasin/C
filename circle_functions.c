#include<stdio.h>
float circle(float radius);
const float PI = 3.14;

int main() {
    
    float radius,result;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius );

    result = circle(radius);

    return 0;


}

float circle(float radius){

    float diameter,circumference,area;

    diameter = radius*2;
    circumference = PI*2*radius;
    area = PI*(radius*radius);

    printf("Diameter: %.1f\nCircumference: %.1f\nArea: %.1f", diameter, circumference, area);

}