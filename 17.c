// Leap Year Program in C with Logic, Explanation and Output

#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    
    //A year is a leap year if it is divisible by 4.
   //But if that year is also divisible by 100, it is not a leap year unless it is divisible by 400.

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

