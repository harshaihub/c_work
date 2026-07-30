#include <stdio.h>
int main() {
    int x = 10;
    int *p;       // pointer declaration
    p = &x;       // pointer stores address of x

    printf("Address of x: %p\n", p);   // prints address
    printf("Value of x: %d\n", *p);    // dereferencing pointer

    *p = 20;      // modify value at address
    printf("New value of x: %d\n", x); // x is updated
    return 0;
}


