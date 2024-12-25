// 3 Write a C program to generate the first n terms of the Fibonacci sequence.
#include <stdio.h>
void generateFibonacci(int n) {
int t1 = 0, t2 = 1, nextTerm;
printf("Fibonacci Sequence: ");
for (int i = 1; i <= n; i++) {
printf("%d ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
printf("\n");
}
int main() {
int n;
printf("Enter the number of terms: ");
scanf("%d", &n);
if (n <= 0) {
printf("Please enter a positive integer.\n");
} else {
generateFibonacci(n);
}
return 0;
}