#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 0; j < i; j++) {
            if (j == i - 1) {
                printf("-\n");
            } else {
                printf("-|");
            }
        }

        printf(" ");

        for (j = 0; j < i; j++) {
            if (j == i - 1) {
                printf("-\n");
            } else {
                printf("|-");
            }
        }

        printf("\n");
    }

    return 0;
}
