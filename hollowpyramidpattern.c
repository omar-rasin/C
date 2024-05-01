#include<stdio.h>

int main() {

    int height;

    printf("Please enter the height of the pyramid: ");
    scanf("%d", &height);

    for(int i=1;i<=height;i++){
        for(int j=1;j<=height-i;j++){
            printf(" ");
        }for(int k=1;k<=(2*i-1);k++){
            if(i==1||i==height||k==1||k==(2*i-1)){
                printf("*");
            }else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}