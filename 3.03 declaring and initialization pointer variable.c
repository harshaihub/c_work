#include <stdio.h>

int main() {
    int a = 5;
    int *ptr;       // pointer declaration
    ptr = &a;       // pointer initialization

    printf("Address of a: %p\n", ptr);   // prints memory address
    printf("Value of a: %d\n", *ptr);    // dereferencing pointer

    *ptr = 15;      // modify value using pointer
    printf("Updated value of a: %d\n", a);

    return 0;
}

