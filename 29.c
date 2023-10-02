// C Program to Reverse a Number Using FOR Loop 

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Temporary variable to store the original number
    int originalNum = num;

    // Reverse the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Display the reversed number
    printf("Reversed number of %d is: %d\n", originalNum, reversedNum);

    return 0;
}
