#include <stdio.h>

int main() {
    int x = 10;
    int *p;       // pointer declaration
    p = &x;       // pointer initialization

    printf("Address of x: %p\n", p);   // prints memory address
    printf("Value of x: %d\n", *p);    // dereferencing pointer

    *p = 20;      // modifying value using pointer
    printf("New value of x: %d\n", x);

    return 0;
}

