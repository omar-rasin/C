#include<stdio.h>
 
int main() {
 
    int t;
    scanf("%d", &t);
 
    int count = 0;
    int a,b;
 
    for(int i=0; i<t; i++) {
 
        
        scanf("%d %d", &a, &b);
 
        while (a%b != 0)
        {
            a++;
            count++;
        }
 
            printf("%d\n", count);
 
        if(a%b == 0) {
 
            count = 0;
        }
        
        
    }
 
    
 
    return 0;
}
