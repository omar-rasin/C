/*Problem(HackerEarth)
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.
*/


#include<stdio.h>

int main(){

    int l,r,k,i;
    int count = 0;

    scanf("%d %d %d", &l, &r, &k);

    if(l<r){
        for(i=l;i<=r;i++){
            if(i%k == 0){
                count +=1;
            }
        }
    }

    if(l>r){
        for(i=r;i<=l;i++){
            if(i%k == 0){
                count+=1;
            }
        }
    }
    printf("%d", count);
    
    return 0;
}