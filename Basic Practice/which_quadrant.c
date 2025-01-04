/*Write a C program to read the coordinates (x, y) (in the Cartesian system) and
 find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).*/

#include<stdio.h>

int main() {

    float x,y;

    printf("Enter the x-coordinate of your point: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate of your point: ");
    scanf("%f", &y);

    switch(x>0 && y>0){
        case 1:
            printf("First quadrant");
            break;
        case 0:
    switch(x<0 && y>0){
        case 1:
            printf("Second quadrant");
            break;
        case 0:
    switch(x<0 && y<0){
        case 1:
            printf("Third quadrant");
            break;
        case 0:
    switch(x>0 && y<0){
        case 1:
            printf("Fourth Quadrant");
            break;
        case 0:
            printf("Invalid");
            break;
    }
    break;
    }
    }
    }
    return 0;
}