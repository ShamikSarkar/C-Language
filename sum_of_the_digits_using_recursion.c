#include <stdio.h>
// Function to calculate the sum of digits recursively
int sumOfDigits(int n) {
if (n == 0) {
return 0;
}
return (n % 10) + sumOfDigits(n / 10);
}
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (number < 0) {
number = -number;
}
printf("Sum of digits: %d\n", sumOfDigits(number));
return 0;
}