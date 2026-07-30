#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");   // open file for writing
    fprintf(fp, "Hello File I/O\n");
    fclose(fp);

    fp = fopen("data.txt", "r");   // open file for reading
    char buffer[50];
    fgets(buffer, 50, fp);
    printf("File says: %s", buffer);
    fclose(fp);
    return 0;
}

