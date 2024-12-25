#include <stdio.h>
int main() {
float number;
// Input a number
printf("Enter a number: ");
scanf("%f", &number);
// Check the number's sign
if (number > 0) {
printf("The number is positive.\n");
} else if (number < 0) {
printf("The number is negative.\n");
} else {
printf("The number is zero.\n");
}
return 0;
}