#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf(" ");
            } else {
                printf("-");
            }
            if (j < 5) {
                printf(" | ");
            }
        }
        printf("\n");
        if (i < 5) {
            printf("  ");
        }
    }
    return 0;
}
