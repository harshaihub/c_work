#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // initial array
    int n = 5;  // current size
    int i, pos, val, key;

    // Traversal
    printf("Original Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion at position 2
    pos = 2; val = 25;
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
    printf("After Insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion at position 3
    pos = 3;
    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("After Deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Searching for element 40
    key = 40;
    int found = -1;
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    if(found != -1)
        printf("Element %d found at index %d\n", key, found);
    else
        printf("Element %d not found\n", key);

    // Updating element at index 1
    arr[1] = 99;
    printf("After Updating index 1:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting (Bubble Sort)
    for(int pass = 0; pass < n-1; pass++) {
        for(i = 0; i < n-pass-1; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    printf("After Sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

