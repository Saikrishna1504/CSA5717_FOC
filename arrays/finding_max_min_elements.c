#include <stdio.h>

int main() {
    int arr[] = {4, 2, 9, 7, 1, 5},i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}
