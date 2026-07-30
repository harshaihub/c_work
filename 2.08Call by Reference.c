#include <stdio.h>

void change(int *x) {
    *x = 100;   // modifies original variable
}

int main() {
    int a = 10;
    change(&a);
    printf("Value of a: %d\n", a);  // Output: 100 (changed)
    return 0;
}

