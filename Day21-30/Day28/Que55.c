//Write a program to print all the prime numbers from 1 to n usinf nested loops.

#include <stdio.h>
int main() {
    int i, j, n, prime;
    printf("Enter the value of n : ");
    scanf("%d", &n );
    for (i=2; i<=n; i++) {
        prime = 1; //assume i is prime
        for (j=2; j<=i/2; j++) { //check if i is prime
            if (i%j == 0) {
                prime = 0; //i is not prime
                break;
            }
        }
        if (prime == 1) {
            printf("%d ", i);
        }
    }
}