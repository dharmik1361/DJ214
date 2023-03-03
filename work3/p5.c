#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);
    int row_sum[rows];
    for (int i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for (int j = 0; j < cols; j++) {
            row_sum[i] += arr[i][j];
        }
    }
    printf("Row-wise sum:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i+1, row_sum[i]);
    }
    return 0;
}