//Find the Character Is Vowel or Not

#include <stdio.h>
#include <ctype.h> 
int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character); 

    char lowercaseChar = tolower(character);

    if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }

    return 0;
} 