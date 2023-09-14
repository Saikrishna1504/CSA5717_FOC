#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n] ,sum=0;
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    double average = (double)sum / n;
    printf("Average: %2lf\n", average);
    return 0;
}
