//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string:\n");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // For ASCII characters
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < n; i++) {
        // If character repeats inside current window
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}