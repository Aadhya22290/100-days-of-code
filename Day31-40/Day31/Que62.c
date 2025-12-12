//Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Reverse the array without using extra space
    for(i = 0; i < n / 2; i++) {
        arr[i] = arr[i] + arr[n - i - 1];            // Swap using arithmetic operations
        arr[n - i - 1] = arr[i] - arr[n - i - 1];   // Update the last element
        arr[i] = arr[i] - arr[n - i - 1];          // Update the first element
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}