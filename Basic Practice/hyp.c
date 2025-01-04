#include<stdio.h>
#include<math.h>

int main() {

    float base,height,hypo;

    printf("Enter the length of the base: ");
    scanf("%f", &base);

    printf("Enter the length of the height: ");
    scanf("%f", &height);

    hypo = sqrt((base*base)+(height*height));

    printf("The length of this triangle's hypotennuse is %f", hypo);

    return 0;
}