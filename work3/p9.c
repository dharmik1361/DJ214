#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr) / sizeof(int);
    int cross_diagonal_sum = 0;
    for (int i = 0; i < size; i++) {
        cross_diagonal_sum += arr[i][i] + arr[i][size-i-1];
    }
    if (size % 2 == 1) {
        cross_diagonal_sum -= arr[size/2][size/2];
    }
    printf("Cross-diagonal sum: %d\n", cross_diagonal_sum);
    return 0;
}