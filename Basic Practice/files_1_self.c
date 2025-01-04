#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE * fpointer = fopen("c: players.txt", "a");

    fprintf(fpointer, "\nHamim-Pointguard");

    fclose(fpointer);

    return 0;
}

