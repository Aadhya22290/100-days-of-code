//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n;

    // Input array size (array contains numbers from 0 to n except one missing)
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate expected sum from 0 to n
    int expected_sum = n * (n + 1) / 2;

    // Calculate actual sum of array
    int actual_sum = 0;
    for(int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    // Missing number is difference between expected and actual sum
    int missing_number = expected_sum - actual_sum;

    printf("Missing number: %d\n", missing_number);

    return 0;
}