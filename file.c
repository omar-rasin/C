#include<stdio.h>

int main() {

    FILE *fptr = fopen("test.txt", "r");

    char output[1000];

    if (fptr != NULL) {

        while (fgets(output, 1000, fptr) != NULL) {

            printf("%s", output);
        }
        fclose(fptr);
    }
    else {

        printf("File not found");
    }

    return 0;
}