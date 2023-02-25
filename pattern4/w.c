#include <stdio.h>

int main() {
    int i, j, height = 5, width = 13;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            if (j == 1 || j == width || (i == height && j % 2 == 1) || (i < height && (j == i * 2 || j == width - i * 2)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}