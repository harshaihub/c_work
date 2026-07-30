#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("demo.txt", "w");
    fputc('A', fp);   // write character
    fclose(fp);

    fp = fopen("demo.txt", "r");
    ch = fgetc(fp);   // read character
    printf("Character read: %c\n", ch);
    fclose(fp);

    return 0;
}

