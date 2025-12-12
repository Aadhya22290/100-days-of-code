#include <stdio.h>

void pA(int a[], int n) {
    if (n == 0) {
        printf("Empty.\n");
        return;
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void dE(int a[], int *n, int idx) {
    if (idx < 0 || idx >= *n) {
        printf("Invalid index. No element deleted.\n");
        return;
    }
    for (int i = idx; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    printf("Element at index %d deleted.\n", idx);
}

int main() {
    int arr[100];
    int n, idx;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid count.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal ");
    pA(arr, n);

    printf("Enter index to delete (0 to %d): ", n - 1);
    scanf("%d", &idx);

    dE(arr, &n, idx);

    printf("\nAfter Deletion ");
    pA(arr, n);

    return 0;
}