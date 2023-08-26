#include <stdio.h>
int main() {
    int n, i, sum = 0;
    float avg;
  //  printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum =sum + i;
        avg=sum/n;
    }
    printf("Sum = %d\n", sum);
    printf("avg= %2.f\n", avg);
    return 0;
}

