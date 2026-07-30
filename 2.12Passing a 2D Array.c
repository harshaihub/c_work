#include <stdio.h>

// Function to print 2D array
void displayMatrix(int matrix[2][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    displayMatrix(matrix, 2, 3);   // passing 2D array
    return 0;
}

