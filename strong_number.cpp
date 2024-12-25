#include <stdio.h>
int factorial(int n) {
int fact = 1;
for (int i = 1; i <= n; i++) {
fact *= i;
}
return fact;
}
int isStrongNumber(int num) {
int originalNum = num;
int sum = 0;
while (num > 0) {
int digit = num % 10; // Extract the last digit
sum += factorial(digit); // Add the factorial of the digit to the sum
num /= 10; // Remove the last digit
}
return (sum == originalNum); // Check if the sum equals the original number
}
int main() {
int number;
// Input from the user
printf("Enter a number: ");
scanf("%d", &number);
// Check if the number is a strong number
if (isStrongNumber(number)) {
printf("%d is a Strong Number.\n", number);
} else {
printf("%d is not a Strong Number.\n", number);
}
return 0;
}
