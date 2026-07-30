#include <stdio.h>

void updateValue(int *p) {
    *p = *p + 10;   // modifies the original variable
}

int main() {
    int x = 5;
    updateValue(&x);   // pass address of x
    printf("Updated value of x: %d\n", x);  // Output: 15
    return 0;
}

