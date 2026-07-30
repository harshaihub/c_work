#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Branching
    if(n > 0) {
        printf("Positive number\n");
    } else if(n < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    // Loop
    printf("Numbers from 1 to n:\n");
    for
	(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

