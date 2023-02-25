#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 4; j++) {
            if ((i == 1 || i == 7) && j != 4) {
                printf("* ");
            } else if (i == 2 && j == 1) {
                printf("* ");
            } else if (i >= 3 && i <= 6 && j == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}