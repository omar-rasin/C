#include<stdio.h>

void triangle(int num);
void square(int num);
void rectangle(int num1, int num2);
void rhombus(int num);
void pyramid(int num);
void diamond(int num);

int main() {
    
    int choice;
    int result;
    int triangleHeight, squareSide, rectangleLength, rectangleWidth, rhombusLength, pyramidHeight, diamondHeight;

    printf("Please enter the no. of the pattern you want to print\n1:Triangle\n2:Square\n3:rectangle\n4:Rhombus\n5:pyramid\n6:diamond\n");
    scanf("%d", &choice);

   if(choice==1){
    printf("Enter the height of the triangle: ");
    scanf("%d", &triangleHeight);

     triangle(triangleHeight);
  
   }else if(choice==2){
        printf("Enter the side length of the square: ");
        scanf("%d", &squareSide);

         square(squareSide);
   
   }else if(choice==3){
    printf("Enter the length of the rectangle: ");
    scanf("%d", &rectangleLength);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &rectangleWidth);

     rectangle(rectangleLength, rectangleWidth);
  
   }else if(choice==4){
    printf("Enter the height of the rhombus: ");
    scanf("%d", &rhombusLength);

     rhombus(rhombusLength);
   
   }else if(choice==5){
    printf("Enter the height of the pyramid: ");
    scanf("%d", &pyramidHeight);

     pyramid(pyramidHeight);
   
   }else if (choice==6){
    printf("Enter the height of the diamond: ");
    scanf("%d", &diamondHeight);

     diamond(diamondHeight);
   }

   return 0;

}

void triangle(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}

void square(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            printf("  *");
        }
        printf("\n");
    }
}

void rectangle(int num1, int num2 ){
    for(int i=1;i<=num1;i++){
        for(int j=1;j<=num2;j++){
            printf(" *");
        }
        printf("\n");
    }
}

void rhombus(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=(num-i);j++){
            printf(" ");
        }for(int k=1;k<=num;k++){
            printf(" *");
        }
        printf("\n");
    }
}

void pyramid(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}

void diamond(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=(num-i);j++){
            printf(" ");
        }for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=num-1;i>=1;i--){
        for(int j=1;j<=(num-i);j++){
            printf(" ");
        }for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}