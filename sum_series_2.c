//calculate the sum of the series x^0 + x^1 + x^2......+x^m

#include<stdio.h>
#include<math.h>

int main() {

    int x,m;
    int power;
    int sum=0;

    printf("Enter the value for x: ");
    scanf("%d", &x);

    printf("Enter the highest power of x: ");
    scanf("%d", &m);

    for(int i=0;i<=m;i++){
        
        power = pow(x,i);
        sum+=power;
    }
    printf("sum is %d", sum);

    return 0;
}