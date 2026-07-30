#include <stdio.h>

int main() {
    FILE *fp = fopen("demo.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello, Harshvardhan!", fp);

    fflush(fp);   // force write to file immediately

    fclose(fp);
    return 0;
}

