#include <stdio.h>

int main() {
    int i, j, n;

    n = 7;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == (n + 1) / 2 || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}