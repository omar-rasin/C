//Write an example of a non-tail recursive function
//In a non-tail recursion, the recursion is NOT the last thing that is performed

#include<stdio.h>

void func(int n) {

    if(n<1) {

        return;

    }else {

        printf("%d  ", n);

        func(n/2);

        printf("%d  ", n);
    }
}

void main() {

    int num;

    scanf("%d", &num);

    func(num);


}