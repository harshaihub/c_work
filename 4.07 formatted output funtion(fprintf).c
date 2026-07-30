#include <stdio.h>

int main() {
    FILE *fp = fopen("student.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int roll = 102;
    char name[] = "Vivek";
    float marks = 89.5;

    fprintf(fp, "Roll: %d, Name: %s, Marks: %.1f\n", roll, name, marks);
    fclose(fp);

    return 0;
}

