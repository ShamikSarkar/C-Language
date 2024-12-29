#include <stdio.h>
// Function to check if a number is even
int isEven(int number) {
return number % 2 == 0;
}
int main() {
int num;
// Input from the user
printf("Enter an integer: ");
scanf("%d", &num);
// Check and display the result
if (isEven(num)) {
printf("%d is even.\n", num);
} else {
printf("%d is odd.\n", num);
}
return 0;
}