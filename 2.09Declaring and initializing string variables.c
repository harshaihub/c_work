#include <stdio.h>

int main() {
    char name1[6] = {'H','e','l','l','o','\0'};  // explicit
    char name2[] = "World";                      // shorthand

    printf("String 1: %s\n", name1);
    printf("String 2: %s\n", name2);

    return 0;
}

