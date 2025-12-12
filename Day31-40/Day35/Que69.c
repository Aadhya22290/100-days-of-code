//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int l, sl;

    printf("Enter number of elements (min 2, max 100): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: Array needs at least 2 elements.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    l = sl = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > l) {
            sl = l;
            l = arr[i];
        } else if (arr[i] > sl && arr[i] != l) {
            sl = arr[i];
        }
    }

    if (sl == INT_MIN) {
        printf("No second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", sl);
    }

    return 0;
}