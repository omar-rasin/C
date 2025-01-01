//A code that prints "Hello World" 10 times

#include<stdio.h>

int main() {


    int n;//1
    printf("Enter the number of times to print: ");//1
    scanf("%d", &n);//1

    int i; //1

    for(i=0;i<n;i++) { //1+(n+1)+n

        printf("Hello World\n");//n
    }

    return 0;//1

    //Total : 5+2n+2+n = 3n+7
    //Time Complexity = O(n)
}

/*int main() {


        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");
        printf("Hello World\n");

    return 0;
}*/
