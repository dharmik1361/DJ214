#include <stdio.h>

int main() {
    int i, j;
    // print first half of the pattern
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // print second half of the pattern
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // print a single 1
    printf("1\n");
    return 0;
}
