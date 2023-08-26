#include <stdio.h>
#include <stdlib.h>
void printDigits(int num) {
 int digit;
 num = abs(num); 
 while (num > 0) {
 digit = num % 10;
 printf("%d ", digit);
 num = num / 10;
 }
}
int main() {
 int number;
 printf("Enter an integer number: ");
 scanf("%d", &number);
 printf("Printing digits of the number: ");
 printDigits(number);
 return 0;
}

