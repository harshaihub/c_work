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

    // Move file pointer to beginning
    fseek(fp, 0, SEEK_SET);

    // Read string from file
    fgets(str, sizeof(str), fp);
    printf("File content: %s\n", str);

    // Move pointer 7 bytes from beginning
    fseek(fp, 7, SEEK_SET);
    fgets(str, sizeof(str), fp);
    printf("After fseek: %s\n", str);

    fclose(fp);
    return 0;
}

