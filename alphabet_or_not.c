#include <stdio.h>
#include <ctype.h> // For isalpha() function
int main() {
char ch;
// Input character from the user
printf("Enter a character: ");
scanf("%c", &ch);
// Check if the character is an alphabet
if (isalpha(ch)) {
printf("%c is an alphabet.\n", ch);
} else {
printf("%c is not an alphabet.\n", ch);
}
return 0;
}