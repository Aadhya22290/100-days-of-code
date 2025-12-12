//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a name:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int lastSpace = -1;

    // Find the position of the last space (before surname)
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    printf("Output:\n");

    // Print initials (for all names except surname)
    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    for (int i = 0; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            printf("%c.", toupper(str[i + 1]));
    }

    // Print surname in full
    if (lastSpace != -1) {
        printf(" %s\n", &str[lastSpace + 1]);
    } else {
        // If there is no space (only one word name)
        printf("%s\n", str);
    }

    return 0;
}