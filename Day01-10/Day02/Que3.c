//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
