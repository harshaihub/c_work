#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;   // pointer to first element (same as &arr[0])

    // Access elements using pointer
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p+i));   // *(p+i) is same as arr[i]
    }
    return 0;
}

