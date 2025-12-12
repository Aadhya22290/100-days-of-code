//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    int product = 1; // Initialize product to 1 (multiplicative identity)
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if the number is even
            product *= i; // Multiply the even number to the product
        }
    }
    printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}