#include <stdio.h>

int main() {
    FILE *fp;
    char str[50];

    fp = fopen("demo.txt", "w");
    fputs("Hello, Harshvardhan!", fp);   // write string
    fclose(fp);

    fp = fopen("demo.txt", "r");
    fgets(str, sizeof(str), fp);         // read string
    printf("String read: %s\n", str);
    fclose(fp);

    return 0;
}

