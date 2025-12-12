//Merge two arrays.
#include <stdio.h>  
int main() {
    int a[100], b[100], c[200];
    int i, n1, n2, n3;

    printf("Enter size of first array: \n");
    scanf("%d", &n1);
    printf("Enter elements in first array: \n");
    for(i = 0; i < n1; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: \n");
    scanf("%d", &n2);
    printf("Enter elements in second array: \n");
    for(i = 0; i < n2; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    n3 = n1 + n2;
    for(i = 0; i < n1; i++) {
        c[i] = a[i]; // Copy first array to merged array
    }
    for(i = 0; i < n2; i++) {
        c[i + n1] = b[i]; // Copy second array to merged array
    }
    printf("Merged array: ");
    for(i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
} 