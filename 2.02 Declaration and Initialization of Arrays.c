#include <stdio.h>

int main() {
    int marks[5] = {90, 85, 70, 88, 95};  // declaration + initialization

    printf("Marks of students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    return 0;
}

