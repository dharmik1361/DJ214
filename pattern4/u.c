#include <stdio.h>

int main() {
    int i, j, height = 7, width = 5;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            if (i == height || j == 1 || j == width)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}