//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int a, b, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter %d elements:\n", a);
    for( i=0; i<a; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &b);
    for( i=0; i<a; i++) {
        if (arr[i] == b) {
            found = 1; // Element found
        }
    }
    if (found) {
        printf("Element %d found in the array.\n", b);
    } else {
        printf("Element %d not found in the array.\n", b);
    }
    return 0;
}