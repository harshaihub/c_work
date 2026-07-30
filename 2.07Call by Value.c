#include <stdio.h>

void change(int x) {
    x = 100;   // only local change
}

int main() {
    int a = 10;
    change(a);
    printf("Value of a: %d\n", a);  // Output: 10 (unchanged)
    return 0;
}

