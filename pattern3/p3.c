#include <stdio.h>

int main() {
    int i, j;

    // First half of the pattern
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= i; j--) {
            printf("%d ", j);
        }
        for (j = 1; j <= 10 - 2*i; j++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Second half of the pattern
    for (i = 4; i >= 1; i--) {
        for (j = 4; j >= i; j--) {
            printf("%d ", j);
        }
        for (j = 1; j <= 10 - 2*i; j++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}