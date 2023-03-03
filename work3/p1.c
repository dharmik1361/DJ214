#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the 2D array: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}