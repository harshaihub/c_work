#include <stdio.h>

int main() {
    FILE *fp;

    // Open file for writing
    fp = fopen("demo.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, Harshvardhan!\n");  // write to file

    // Close file
    if(fclose(fp) == 0) {
        printf("File closed successfully.\n");
    } else {
        printf("Error closing file.\n");
    }

    return 0;
}

