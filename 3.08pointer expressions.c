#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;   // pointer to first element

    printf("First element: %d\n", *p);
    printf("Second element: %d\n", *(p+1));
    printf("Third element: %d\n", *(p+2));

    if(p < (arr+3)) {
        printf("Pointer is within array bounds\n");
    }

    return 0;
}

