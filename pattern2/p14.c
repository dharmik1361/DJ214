#include <stdio.h>

int main() {
    int i, j, k, n=5;
    char ch;

    for(i=n; i>=1; i--) {
        ch = 'A';
        for(j=i; j<n; j++) {
            printf("  ");
        }
        for(k=1; k<=i; k++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
