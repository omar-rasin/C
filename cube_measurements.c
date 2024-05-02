#include<stdio.h>

int main() {

    float side,surfacearea,volume;

    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    surfacearea = 6*side*side;
    volume = side*side*side;

    printf("The surface area of the cube is %f\n", surfacearea);
    printf("The volume of the cube is %f", volume);

    return 0;
} 