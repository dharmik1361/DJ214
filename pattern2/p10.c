#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k;

    for(i = 1; i <= n; i++) {
        for(k = 1; k < i; k++) {
            printf(" ");
        }
        for(j = i; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}