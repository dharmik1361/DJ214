#include <stdio.h>

int main() {
    int i, j, height = 5, width = 9;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            if ((i == j || j == (width-i+1)) && i <= height/2+1)
                printf("*");
            else if (j == height/2+1 && i > height/2+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}