#include <stdio.h>
// Function to swap using call-by-value
void swapByValue(int a, int b) {
int temp = a;
a = b;
b = temp;
printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}
// Function to swap using call-by-reference
void swapByReference(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int x, y;
// Input integers
printf("Enter two integers:\n");
scanf("%d %d", &x, &y);
// Call-by-value swapping
printf("\n--- Call-by-Value ---\n");
swapByValue(x, y);
printf("After swapByValue: x = %d, y = %d \n", x, y);
// Call-by-reference swapping
printf("\n--- Call-by-Reference ---\n");
swapByReference(&x, &y);
printf("After swapByReference: x = %d, y = %d \n", x, y);
return 0;
}