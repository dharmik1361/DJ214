#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7; j++) {
            if(i == 0 || i == 6) {
                printf("*");
            }
            else if(j == 6-i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}