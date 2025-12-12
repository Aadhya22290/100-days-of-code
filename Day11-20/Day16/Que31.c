//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}