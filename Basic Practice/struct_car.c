#include<stdio.h>
#include<string.h>

struct Engine {

    int horsepower;
    char cylinderType[5];
};

struct Car {

    char name[50];
    char company[30];
    long int ID;
    char color[12];

    struct Engine engine;
};

int main() {

    struct Car car;

    strcpy(car.name, "Koenisegg Jesko");
    strcpy(car.company, "Koenisegg");
    car.ID = 3453910;
    strcpy(car.color, "Black");

    car.engine.horsepower = 3000;
    strcpy(car.engine.cylinderType, "V8");

    printf("%s\n %s\n %d\n %s\n %d\n %s\n", car.name, car.company, car.ID, car.color, car.engine.horsepower, car.engine.cylinderType);

    return 0;


}