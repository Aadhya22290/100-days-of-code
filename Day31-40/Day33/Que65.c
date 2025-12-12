//Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int a[100], n, i, key, low, high, mid, found = 0;

    printf("Enter size of array: \n");
    scanf("%d", &n);
    printf("Enter elements in sorted array: \n");
    for(i = 0; i < n; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: \n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            found = 1;
            break;
        } else if(a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found) {
        printf("Element %d found at position %d\n", key, mid + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    return 0;

}