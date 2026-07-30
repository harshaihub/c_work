#include <stdio.h>

// Function declaration
int factorial(int n);
void displayMessage();

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call with return value
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Void function call
    displayMessage();

    return 0;
}

// Function definition (recursive)
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Void function definition
void displayMessage() {
    printf("Program executed successfully!\n");
}

