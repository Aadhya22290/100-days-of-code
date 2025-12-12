//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k, i;
    int arr[100], rotated[100];

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k >= n

    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}