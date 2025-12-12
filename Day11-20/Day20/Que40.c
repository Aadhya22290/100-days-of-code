//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("1's complement of %d is: ", n); //one's complement means flipping the bits
    for (i = 31; i >= 0; i--) {
        // Extract each bit and flip it
        if ((n & (1 << i)) == 0) { // If the bit is 0
            printf("1");
        } else {
            printf("0"); // If the bit is 1
        }
    }
}