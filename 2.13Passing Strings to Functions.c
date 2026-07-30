#include <stdio.h>

// Function to print string
void printString(char str[]) {
    printf("String is: %s\n", str);
}

int main() {
    char name[] = "Harshvardhan";
    printString(name);   // passing string to function
    return 0;
}

