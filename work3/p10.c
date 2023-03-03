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
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum of boundary elements: %d\n", sum);
    return 0;
}