#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);
    printf("Number of rows: %d\n", rows);
    printf("Number of columns: %d\n", cols);
    printf("Total number of elements: %d\n", rows * cols);
    return 0;
}