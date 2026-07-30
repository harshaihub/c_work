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
    fclose(fp);   // close file

    // Open file for reading
    fp = fopen("demo.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[50];
    fgets(line, sizeof(line), fp);   // read from file
    printf("File content: %s", line);

    fclose(fp);   // close file
    return 0;
}

