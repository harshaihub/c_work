#include <stdio.h>
#define PI 3.14159

int main() {
    int a = 10, b = 3;
    int result;
    float area;

    // Arithmetic operators
    result = a + b * 2;  
    printf("Arithmetic result: %d\n", result);

    // Relational operators
    if(result > 15) {
        printf("Result is greater than 15\n");
    }

    // Logical operators
    if((a > 5 && b < 5) || (result == 16)) {
        printf("Logical condition is true\n");
    }

    // Assignment operators
    a += 5;  // a = a + 5
    printf("Updated value of a: %d\n", a);

    // Conditional (ternary) operator
    int age = 18;
    printf("You are %s\n", (age >= 18) ? "Adult" : "Minor");

    // Bitwise operators
    int bit = a & b;
    printf("Bitwise AND of a and b: %d\n", bit);

    // Special operator (sizeof)
    printf("Size of int: %lu bytes\n", sizeof(int));

    // Expression combining constants and variables
    int radius = 4;
    area = PI * radius * radius;
    printf("Area of circle: %.2f\n", area);

    return 0;
}

