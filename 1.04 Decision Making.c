#include <stdio.h>

int main() {
    int num;

    // Input operation
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Output operation
    printf("You entered: %d\n", num);

    // Decision-making using if-else
    if(num > 0) {
        printf("The number is positive.\n");
    } else if(num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Decision-making using switch
    switch(num % 2) {
        case 0:
            printf("The number is even.\n");
            break;
        case 1:
        case -1: // handle negative odd numbers
            printf("The number is odd.\n");
            break;
    }

    // Conditional (ternary) operator
    printf("Quick check: %s\n", (num >= 10) ? "Number is >= 10" : "Number is < 10");

    return 0;
}

