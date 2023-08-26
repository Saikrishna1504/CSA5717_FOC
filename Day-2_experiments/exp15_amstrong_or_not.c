#include <stdio.h>
int main() {
    int n, org, i, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    org = n;
    while (org != 0) {
       i = org % 10;
       result = result+ i * i * i;
     org = org /10;
    }
    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}
