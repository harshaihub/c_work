#include <stdio.h>

void printString(char *str) {
    printf("String: %s\n", str);
}

int main() {
    char name[] = "Harshvardhan";
    printString(name);   // passes pointer to first character
    return 0;
}

