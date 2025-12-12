//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i;
    int even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even++; //increment even count
        } else {
            odd++; //increment odd count
        }
    }
    printf("Even numbers count: %d\n", even);
    printf("Odd numbers count: %d\n", odd);
    return 0;
}