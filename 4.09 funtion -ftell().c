#include <stdio.h>

int main() {
    FILE *fp;
    char str[50];

    fp = fopen("demo.txt", "w+");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello, Harshvardhan!", fp);

    // Get current position
    long pos = ftell(fp);
    printf("Current position: %ld\n", pos);

    // Move pointer to beginning
    fseek(fp, 0, SEEK_SET);

    fgets(str, sizeof(str), fp);
    printf("File content: %s\n", str);

    fclose(fp);
    return 0;
}

