//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string:\n");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths are not same → cannot be rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Output:\nNot rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Output:\nRotation\n");
    else
        printf("Output:\nNot rotation\n");

    return 0;
}