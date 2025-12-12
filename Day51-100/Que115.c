
//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};  // For counting letters 'a' to 'z'

    // Input two strings
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, they can’t be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Increase count for s, decrease for t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
