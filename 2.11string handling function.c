#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // Length
    printf("Length of str1: %lu\n", strlen(str1));

    // Copy
    strcpy(str3, str1);
    printf("After copy: %s\n", str3);

    // Concatenate
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    // Compare
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Find substring
    char *pos = strstr(str1, "World");
    if(pos != NULL)
        printf("Substring found at position: %ld\n", pos - str1);
    else
        printf("Substring not found\n");

    return 0;
}

