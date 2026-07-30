#include <stdio.h>

// Function to print array elements
void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    display(numbers, 5);   // passing array to function
    return 0;
}

