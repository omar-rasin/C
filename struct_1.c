#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student {

    char name[50];
    char major[20];
    int age;
    float gpa;
};

int main() {

    struct Student student1;

    student1.age = 16;
    student1.gpa = 3.8;
    strcpy(student1.name, "Omar");
    strcpy(student1.major, "Computer Science");

    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);

    return 0;
}