#include <stdio.h>

int main() {
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int sum = 0;
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("Sum of inner elements: %d\n", sum);
    return 0;
}