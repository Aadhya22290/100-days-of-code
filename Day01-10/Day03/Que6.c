//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Before swapping: a = %d, b = %d\n", b, a);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
