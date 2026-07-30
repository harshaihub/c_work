#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    printArray(nums, 5);   // array decays to pointer
    return 0;
}

