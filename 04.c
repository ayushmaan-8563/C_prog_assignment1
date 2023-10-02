//Calculate a Simple Interest

#include <stdio.h>
int main() {
    float principal, rate, t, simpleinterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &t);

    simpleinterest = (principal * rate * t) / 100;

    printf("Simple Interest = %.2f\n", simpleinterest);

    return 0;
}