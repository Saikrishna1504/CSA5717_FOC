#include <stdio.h>

int main() {
    int number;
    
    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Digits of the number: ");

    // Extract and print digits one by one
    while (number != 0) {
        int digit = number % 10; // Get the last digit
        printf("%d ", digit);
        number /= 10; // Remove the last digit
    }

    printf("\n");

    return 0;
}
