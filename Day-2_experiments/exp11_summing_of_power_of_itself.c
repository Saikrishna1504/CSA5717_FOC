#include <stdio.h>
#include <math.h>
int main() {
 int n, i;
 long long sum = 0;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
 long long term = pow(i, i);
 sum += term;
 }
 printf("Sum of the series: %lld\n", sum);
 return 0;
}
