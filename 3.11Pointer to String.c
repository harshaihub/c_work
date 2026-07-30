#include <stdio.h>

int main() {
    char str[] = "Harsh";
    char *p = str;   // pointer to first character

    while(*p != '\0') {
        printf("%c ", *p);   // prints each character
        p++;
    }
    return 0;
}

