#include <stdio.h>
#include <math.h>
// Function prototypes
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);
int main() {
int num;
// Input from the user
printf("Enter a number: ");
scanf("%d", &num);
// Checking prime number
if (isPrime(num))
printf("%d is a Prime number.\n", num);
else
printf("%d is not a Prime number.\n", num);
// Checking Armstrong number
if (isArmstrong(num))
printf("%d is an Armstrong number.\n", num);
else
printf("%d is not an Armstrong number.\n", num);
// Checking Perfect number
if (isPerfect(num))
printf("%d is a Perfect number.\n", num);
else
printf("%d is not a Perfect number.\n", num);
return 0;
}
// Function to check if a number is prime
int isPrime(int num) {
if (num <= 1)
return 0;
for (int i = 2; i <= sqrt(num); i++) {
if (num % i == 0)
return 0;
}
return 1;
}
// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
int sum = 0, temp = num, digits = 0;
// Count the number of digits
while (temp > 0) {
temp /= 10;
digits++;
}
temp = num;
while (temp > 0) {
int digit = temp % 10;
sum += pow(digit, digits);
temp /= 10;
}
return (sum == num);
}
// Function to check if a number is a Perfect number
int isPerfect(int num) {
int sum = 0;
// Sum of divisors
for (int i = 1; i <= num / 2; i++) {
if (num % i == 0)
sum += i;
}
return (sum == num);
}