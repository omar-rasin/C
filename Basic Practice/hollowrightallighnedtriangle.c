#include<stdio.h>

int main() {

    int height;

    scanf("%d", &height);

    for(int i =1;i<=height;i++){
        for(int k=1;k<=(height-i);k++){
            printf(" ");
        }for(int j=1;j<=i;j++){
            if(i==1||i==height||j==1||j==i){
                printf("*");
            }else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}