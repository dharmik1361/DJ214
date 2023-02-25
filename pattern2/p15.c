#include <stdio.h>

int main() {
    char c = 'A';
    int i, j, k;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i-1; j++) {
            printf("  ");
        }
        for (k = i; k <= 5; k++) {
            printf("%c ", c++);
        }
        printf("\n");
        c = 'A';
    }
    return 0;
}
