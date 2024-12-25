#include <stdio.h>
int main() {
int year;
// Input year from the user
printf("Enter a year: ");
scanf("%d", &year);
// A year is a leap year if it is divisible by 4
// but not divisible by 100, unless it is divisible by 400
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
printf("%d is a leap year.\n", year);
} else {
printf("%d is not a leap year.\n", year);
}
return 0;
}