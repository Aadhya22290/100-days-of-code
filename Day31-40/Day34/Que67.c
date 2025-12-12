//Insert an element in an array at a given position.

#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the right
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    int element, position;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    insertElement(arr, &size, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}