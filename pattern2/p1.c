#include <stdio.h>

int main() {
    int rows = 5;
    int spaces, numbers;
    for (int i = 1; i <= rows; i++) {
        
        for (spaces = i; spaces < rows; spaces++) {
            printf("  ");
        }
       
        for (numbers = 1; numbers <= i; numbers++) {
            printf("%d ", numbers);
        }
        
        for (numbers = i - 1; numbers >= 1; numbers--) {
            printf("%d ", numbers);
        }
        printf("\n");
    }
    return 0;
}