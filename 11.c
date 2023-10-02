// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int power1 = n;
    int power2 = n * n;
    int power3 = n * n * n;

    printf("%d^1 = %d\n", n, power1);
    printf("%d^2 = %d\n", n, power2);
    printf("%d^3 = %d\n", n, power3);

    return 0;
}