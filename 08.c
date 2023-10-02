//To Check a Number Is Positive or Negative

#include <stdio.h>
int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("The number %.2lf is positive.\n", number);
    } else if (number < 0) {
        printf("The number %.2lf is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}