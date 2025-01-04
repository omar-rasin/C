#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {

    int t;
    scanf("%d", &t);
    int i =1;

    for(int i=1;i<=t;i++){
        
        int x1,y1,x2,y2,x3,y3,x4,y4;
        
        scanf("%d %d", &x1, &y1);
        scanf("%d %d", &x2, &y2);
        scanf("%d %d", &x3, &y3);
        scanf("%d %d", &x4, &y4);

        if(y1==y2){
             int length = abs(x2-x1);
             int area = length*length;
             printf("%d\n", area);
              
        }else if(y1==y3){
           int  length = abs(x3-x1);
           int area = length*length;
           printf("%d\n", area);
            
        }else if(y2==y4){
            int length = abs(x4-x2);
            int area = length*length;
            printf("%d\n", area);
         
        }else if(y3==y4){
            int length = abs(x4-x3);
            int area = length*length;
         
            printf("%d\n", area);
        
        }else if(x1==x2){
            int length = abs(y2-y1);
            int area = length*length;
           printf("%d\n", area);
        
        }else if(x1=x3){
           int  length = abs(y3-y1);
           int area = length*length;
           printf("%d\n", area);
            
        }else if(x2=x4){
            int length = abs(y4-y2);
            int area = length*length;
            printf("%d\n", area);
         
        }else if(x3==x4){
            int length = abs(y4-y3);
            int area = length*length;
         
            printf("%d\n", area);

        }

        }

         return 0;
}

    
    

