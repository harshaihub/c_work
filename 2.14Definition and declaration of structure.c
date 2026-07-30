#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct Student s1 = {101, "Harshvardhan", 95.5};
    struct Student s2;

    // Assign values later
    s2.roll_no = 102;
    strcpy(s2.name, "Vivek");
    s2.marks = 89.0;

    // Display
    printf("Student 1: %d, %s, %.2f\n", s1.roll_no, s1.name, s1.marks);
    printf("Student 2: %d, %s, %.2f\n", s2.roll_no, s2.name, s2.marks);

    return 0;
}

