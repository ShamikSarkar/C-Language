#include <stdio.h>
int main() {
int num;
// Input a number from the user
printf("Enter a number between 100 and 500: ");
scanf("%d", &num);
// Check if the number is within the valid range
if (num < 100 || num > 500) {
printf("The number is out of range. Please enter a number between 100 and 500.\n");
return 1; // Exit the program
}
// Check divisibility by 5 and 11
if (num % 5 == 0 && num % 11 == 0) {
printf("The number %d is divisible by both 5 and 11.\n", num);
} else {
printf("The number %d is not divisible by both 5 and 11.\n", num);
}
return 0;
}