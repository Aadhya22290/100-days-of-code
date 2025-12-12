//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate discriminant
    discriminant = b * b - 4 * a * c;
    
    // Categorize and find roots based on the value of the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots are the same)
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}