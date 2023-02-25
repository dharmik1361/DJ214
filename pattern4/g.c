#include <stdio.h>

int main() {
    int i, j, n;

    n = 7;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i == 1 || i == n) && (j >= 2 && j <= n - 1)) {
                printf("*");
            } else if (i > 1 && i < n && j == n) {
                printf("*");
            } else if (i == (n + 1) / 2 && j > 2 && j < n) {
                printf("*");
            } else if (i > (n + 1) / 2 && j == 2) {
                printf("*");
            } else if (i == n && j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}