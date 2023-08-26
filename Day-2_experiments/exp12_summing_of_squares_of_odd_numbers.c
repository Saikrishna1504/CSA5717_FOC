#include <stdio.h>
int main() {
    int N,i,sum=0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i=i+2) {
        sum += i * i; 
    }
    printf("Sum of the series: %d\n", sum);

    return 0;
}
