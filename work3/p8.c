#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr) / sizeof(int);
    int anti_diagonal_sum = 0;
    for (int i = 0; i < size; i++) {
        anti_diagonal_sum += arr[i][size-i-1];
    }
    printf("Anti-diagonal sum: %d\n", anti_diagonal_sum);
    return 0;
}