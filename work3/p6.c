#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);
    int col_sum[cols];
    for (int j = 0; j < cols; j++) {
        col_sum[j] = 0;
        for (int i = 0; i < rows; i++) {
            col_sum[j] += arr[i][j];
        }
    }
    printf("Column-wise sum:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j+1, col_sum[j]);
    }
    return 0;
}