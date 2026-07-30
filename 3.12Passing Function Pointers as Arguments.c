#include <stdio.h>

void compute(int x, int y, int (*op)(int, int)) {
    printf("Result: %d\n", op(x, y));
}

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main() {
    compute(4, 5, add);   // calls add
    compute(4, 5, mul);   // calls mul
    return 0;
}

