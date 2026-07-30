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

    // Reset file pointer to beginning
    rewind(fp);

    // Read from start
    fgets(str, sizeof(str), fp);
    printf("File content: %s\n", str);

    fclose(fp);
    return 0;
}

