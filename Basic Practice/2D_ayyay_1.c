#include<stdio.h>

int main() {

    int no_student;
    printf("Enter the Number of Students: ");
    scanf("%d", &no_student);

    int no_subject;
    printf("Enter the number of subjects: ");
    scanf("%d", &no_subject);

    int sum = 0;

    int marks[no_student][no_subject];

    for(int i=0; i<no_student; i++) {
        for(int j=0; j<no_subject; j++) {
            printf("Enter the marks at index[%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    //Save Marks in an array 
}