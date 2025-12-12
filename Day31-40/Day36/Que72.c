//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols;
    int matrix[100][100];
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}