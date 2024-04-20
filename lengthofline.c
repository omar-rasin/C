#include<stdio.h>
#include<math.h>

int main() {

    float x1,x2,y1,y2,length;

    printf("Enter the first coordinate : ");
    scanf("%f , %f", &x1,&y1);

    printf("Enter the second coordinate : ");
    scanf("%f , %f", &x2,&y2);

    length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("The length of the line is %f", length);
    return 0;

}