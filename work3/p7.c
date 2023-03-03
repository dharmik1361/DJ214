#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr) / sizeof(int);
    int diagonal_sum = 0;
    for (int i = 0; i < size; i++) {
        diagonal_sum += arr[i][i];
    }
    printf("Diagonal sum: %d\n", diagonal_sum);
    return 0;
}