// Write a C Program to Display The Size of Different Data Types

#include <stdio.h>
int main() {
    
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of long double: %lu bytes\n", sizeof(long double));

    return 0;
}