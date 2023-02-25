#include <stdio.h>

int main() {
    int n = 5;  // number of rows
    for (int i = 1; i <= n; i++) {
        // print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // print the stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
