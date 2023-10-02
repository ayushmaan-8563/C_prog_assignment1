// C Program to Check Uppercase or Lowercase or Digit or Special Character 

#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character); 

    if (isupper(character)) {
        printf("%c is an uppercase letter.\n", character);
    }else if (islower(character)) {
        printf("%c is a lowercase letter.\n", character);
    }else if (isdigit(character)) {
        printf("%c is a digit.\n", character);
    }else {
        printf("%c is a special character.\n", character);
    }

    return 0;
}