#include<stdio.h>

int cube(int num);

int main() {
    int num,result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cube(num);

    return 0;

}

int cube(int num){
    int cube=num*num*num;
    printf("The cube of %d is %d", num, cube);
    return cube;
}