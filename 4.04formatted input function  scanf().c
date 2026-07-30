#include <stdio.h>

int main() {
    int roll;
    char name[20];
    float marks;

    printf("Enter roll, name, and marks: ");
    scanf("%d %s %f", &roll, name, &marks);

    printf("Roll: %d, Name: %s, Marks: %.2f\n", roll, name, marks);
    return 0;
}

