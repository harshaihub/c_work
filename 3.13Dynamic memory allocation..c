#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    // Input elements
    for(i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Display elements
    printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reallocate memory for double size
    arr = (int*) realloc(arr, 2 * n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not reallocated!\n");
        return 1;
    }

    // Add new elements
    for(i = n; i < 2*n; i++) {
        arr[i] = i + 1;
    }

    printf("\nArray after reallocation:\n");
    for(i = 0; i < 2*n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}

