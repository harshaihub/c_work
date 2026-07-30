#include <stdio.h>

int main() {
    FILE *fp = fopen("student.txt", "r");
    int roll;
    char name[20];
    float marks;

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    fscanf(fp, "%d %s %f", &roll, name, &marks);
    printf("Roll: %d, Name: %s, Marks: %.2f\n", roll, name, marks);

    fclose(fp);
    return 0;
}

