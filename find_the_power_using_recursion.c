#include <stdio.h>
// Function to calculate power using recursion
int power(int base, int exponent) {
// Base case: if exponent is 0, return 1 (any number raised to power 0 is 1)
if (exponent == 0)
return 1;
// Recursive case: base * power of (base, exponent - 1)
return base * power(base, exponent - 1);
}
int main() {
int base, exponent;
// Input base and exponent from user
printf("Enter base: ");
scanf("%d", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);
// Calculate power
int result = power(base, exponent);
// Output the result
printf("%d raised to the power of %d is %d\n", base, exponent, result);
return 0;
}