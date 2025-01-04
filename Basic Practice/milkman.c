/*Your mother has sent you to the milkman with a cylindrical bottle. You have to pay the milkman the price for the bottle full of milk at
 a rate of ₹40 per litre of milk. You are given the radius (r) and the height (h) of the bottle in centimetres. You can assume the value 
 of π as 3.14.

Formula for volume of cylinder:

V=π r2h

Also, 1 litre = 1000 cm3.

Input Format
1 line containing two space separated integers - the radius and the height of the bottle (in centimetres).

Output Format
The amount you need to pay to the milkman in rupees, accurate upto exactly 2 decimal places.

*/

#include<stdio.h>

int main() {

    float radius,height,volume;
    float money;

    printf("Enter the radius of the bottle in cm: ");
    scanf("%f", &radius);

    printf("Enter the height of the bottle in cm: ");
    scanf("%f", &height);

    volume = (3.14)*radius*radius*height; //pir^2h

    //1000cm^3 = 40rupees | 1cm^3 = 40/1000 = 0.04rupees | thus, x cm^3= 0.04*x

    money = 0.04*volume;

    printf("The money to pay the milkman per bottle will be rupees %.2f", money);

    return 0;
}