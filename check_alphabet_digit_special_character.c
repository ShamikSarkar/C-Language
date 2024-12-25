#include <stdio.h>
#include <ctype.h> // For checking if a character is alphabet or digit
int main() {
char ch;
// Input a character from the user
printf("Enter a character: ");
scanf("%c", &ch);
// Check whether the character is an alphabet
if (isalpha(ch)) {
printf("The character '%c' is an alphabet.\n", ch);
}
// Check whether the character is a digit
else if (isdigit(ch)) {
printf("The character '%c' is a digit.\n", ch);
}
// If it's neither an alphabet nor a digit, it's a special character
else {
printf("The character '%c' is a special character.\n", ch);
}
return 0;
}